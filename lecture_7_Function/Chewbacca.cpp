#include<iostream>
using namespace std;
int len(int n){
    int ans =0;
    while(n!=0){
        n=n/10;
        ans++;
    }
    return ans;
}
int reve(int n){
    int rev =0;

    while(n!=0){
        int digit = n%10;
        int inv = 9-digit;
        if(inv < digit){
            rev = rev*10 + inv;
        }
        else{
            rev = rev*10 + digit;
        }
        n = n/10;
    }
    return rev;
}
int main(){
    int n;
    cin>>n;
    int rev =0;

    while(n!=0){
        int digit = n%10;
        int inv = 9-digit;
        if(inv < digit){
            rev = rev*10 + inv;
        }
        else{
            rev = rev*10 + digit;
        }
        n = n/10;
    }
    cout<<reve(rev);
     
}