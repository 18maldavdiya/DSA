#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    //delete
    v.pop_back();
    v.push_back(4);
    v.push_back(5);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    //insert an element in bigin
    v.insert(v.begin()+2,6);
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    //reverse
    reverse(v.begin(),v.end());
    cout<<endl;
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
