#include<iostream>
#include<vector>
using namespace std;
int main() {
	int n ;
	cin>>n;
	vector<vector<int>> arr(n,vector<int>(n));
    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    // int flage = 0;
    // for(int i = 0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(i<j){
    //             arr[i][j]=0;
    //             flage =1;
    //         }
    //     }
    // }
    // if(flage==1){
    //     cout<<"true";
    // }
    // else{
    //     cout<<"false";
    // }
    int flage = 0;
    for(int i = 0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i][j]!=0){
                flage =1;
            }
        }
    }
    if(flage==1){
        cout<<"false";
    }
    else{
        cout<<"true";
    }
}