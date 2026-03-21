#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int left = 0;
    int right = n-1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    sort(arr, arr + n);
    for(int i=0;i<n-2;i++){
        if(i>0 && arr[i] == arr[i-1]){
            continue;
        }
        left = i+1;
        right = n-1;
       while(left<right){
        int sum = arr[i] + arr[left] +arr[right];
        if(sum ==target){
            cout<<arr[i]<<" ,"<<arr[left]<< " and "<<arr[right]<<endl;
            left++;
            right--;
        }
        else if(sum<target){
            left++;
        }
        else{
            right--;
        }
    }
}

}