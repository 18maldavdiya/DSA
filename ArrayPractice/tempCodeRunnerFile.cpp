#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int M;
    cin>>M;
    int flag = 0;
    for(int i =0;i<n;i++){
        if(arr[i] == M){
            cout<<i<<endl;
            flag =1;
            break;
        }
    }
    if(flag == 0){
        cout<<"-1"<<endl;
    }
}