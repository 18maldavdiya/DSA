#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rev = 0;
    int sum =0;
     for (int i = n; i > 0; i= i/10)
    {
        int digit = i%10;
        sum = sum + digit;
    }
}