#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int target;
    cin>>target;

    sort(a,a+n);

    for(int i=0;i<n-2;i++){

        int left = i+1;
        int right = n-1;

        while(left < right){

            int sum = a[i] + a[left] + a[right];

            if(sum == target){
                cout<<a[i]<<", "<<a[left]<<" and "<<a[right]<<endl;
                left++;
                right--;
            }

            else if(sum < target){
                left++;
            }

            else{
                right--;
            }

        }
    }
}