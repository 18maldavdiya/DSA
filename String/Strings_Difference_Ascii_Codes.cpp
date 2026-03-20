#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i =0;i<s.size()-1;i++){
        int dif = s[i+1] - s[i];
        cout<<s[i]<<dif<<"";
    }
    cout << s[s.size() - 1];
}