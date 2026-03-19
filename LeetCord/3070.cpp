#include<iostream>
#include<vector>
using namespace std;
int main(){
    int  n;
    int m;
    cin>>n>>m;
    int arr[n][m];
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    
    return 0;
}