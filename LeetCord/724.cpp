#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int total =0;
    int arr[n];
    for(int i =1;i<n;i++){
        cout<<arr[i];
    }
    for(int i =0;i<arr.size();i++){
        total+=arr[i];
    }
    int leftsum =0;
    for(int i =0;i<arr[n].size();i++){
        int rightsum =total-leftsum-arr[i];
        if(leftsum==rightsum){
            return i;
        }
    }
    leftsum+=nums[i];

}