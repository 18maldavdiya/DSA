#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int l = 1;
    int r = n-1;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    while(l<r){
        swap(a[l],a[r]);
        l++;
        r--;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}