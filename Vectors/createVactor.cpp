#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    cout<<"size="<<vec.size()<<endl;
    for(int i : vec){
        cout<<i<<" ";
    }
    return 0;
}