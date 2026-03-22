#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    long long output[n];
    for(int i =0;i<n;i++){
        long long product = 1;
        for(int j=0;j<n;j++){
            if(i != j){
                product =product * arr[j];
            }
        }
        output[i] = product;
    }
    for(int i =0;i<n;i++){
        cout<<output[i]<<" ";
    }

}