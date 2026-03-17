#include<iostream>
#include<vector>
using namespace std;
int main(){
    int M ,N;
    cin>>M>>N;
    vector<vector<int>> arr(M, vector<int>(N));
    for(int i = 0;i<M;i++){
        for(int j=0;j<N;j++){
            cin>>arr[i][j];
        }
    }
    vector<int> row(M,0);
    vector<int> col(N,0);
    for(int i =0; i<M;i++){
        for(int j=0;j<N;j++){
            if(arr[i][j] == 1){
                row[i] = 1;
                col[j] = 1;
            }
            else if(row[i] == 1 || col[j] == 1){
                   arr[i][j] = 1;
            }
             
        }
    }
    // for(int i = 0;i<M;i++){
    //     for(int j=0;j<N;j++){
    //         if(row[i] == 1 || col[j] == 1){
    //             arr[i][j] = 1;
    //         }
    //     }
    // }
    for(int i = 0;i<M;i++){
        for(int j=0;j<N;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   

}