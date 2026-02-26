#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int height[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    int n = sizeof(height)/sizeof(height[0]);
    int leftmax[n];
    leftmax[0] = height[0];
    for(int i = 1; i<n ;i++){
        leftmax[i] = max(height[i], leftmax[i-1]);
    }
    int rightmax[n];
    rightmax[n-1] = height[n-1];
    for(int i = n-2;i>=0;i--){
        rightmax[i] =max(height[i],rightmax[i+1]);
    }
    int trappedwater =0;
    for(int i = 0;i<n;i++){
        trappedwater = trappedwater + min(leftmax[i], rightmax[i]) - height[i];
    }
    cout<<trappedwater;
}