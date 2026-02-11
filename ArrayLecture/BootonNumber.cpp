#include<iostream>
using namespace std;
int digitsum(int n){
    int sum =0;
    while(n!=0){
        int k=n%10;
        sum =sum +k;
        n/10;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    int sum =0;
    int factor =0;
    sum =digitsum(n);
    for(int i =2;i<=n/2 )

}