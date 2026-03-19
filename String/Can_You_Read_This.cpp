#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "ILoveIndia";

    for(int i =0;i<s.length();i++){
        if(isupper(s[i])){
            cout<<endl<<s[i];
        }
        else{
            cout<<s[i];
        }
    }
    cout<<s2;
}
