#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool ans = true;
    for(int i =2;i<=sqrt(n);i++){
        if(n%i==0){
            ans=false;
        }
    }
    if(ans){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"prime nhi he"<<endl;
    }
    return 0;
}