#include<iostream>
#include<algorithm>
using namespace std;
void SumTrp(int a[],int n,int target){
      for(int i =0;i<n-1;i++){
        for(int j= i+1;j<n-1;j++){
            for(int k =j+1;k<n;k++){
                if(a[i] + a[j] +a[k] == target){
                    cout<<a[i]<<","<<a[j]<<" and "<<a[k]<<endl;
                }
            }
        }
      }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    int target;
    cin>>target;
    sort(a, a+n); 
    SumTrp(a,n,target);
}