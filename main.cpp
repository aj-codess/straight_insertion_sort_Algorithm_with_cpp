#include <iostream>
#include <string>
#include <vector>

using namespace std;

void divide_con(vector<int>& pool,int s){
    int i=0;
    while(i<s){
        if(i+1 !=s && pool.at(i)>pool.at(i+1)){
            swap(pool.at(i),pool.at(i+1));
        };

        if(i-1 != -1 && pool.at(i)<pool.at(i-1)){
            for(int si=i;si>0;si--){
                swap(pool.at(si-1),pool.at(si));
            };
        };

        i++;
    };
};

int main(){
    vector<int> vec;

    //testing....
        for(int i=100000;i>=0;i--) vec.push_back(i);

    int size=vec.size();
    divide_con(vec,size);

    //reading....
    for(int si=0;si<size;si++) cout<<vec.at(si)<<endl;

    return 0;
}