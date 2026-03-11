#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    cout<<"size="<<vec.size()<<endl;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.pop_back();
    cout<<"size="<<vec.size()<<endl;
    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    cout<<vec.at(0)<<endl;
    return 0;
}