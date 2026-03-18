#include<iostream>
#include<vector>
using namespace std;
int main(){
    int N;
    cin>>N;
   vector<vector<int>> arr(N+1, vector<int>(N+1));
    for(int i = 1;i<=N;i++){
        for(int j=1;j<=N;j++){
            cin>>arr[i][j];
        }
    }
    int sum =0;
    int max_sum =0;
    int col = 0;
    for(int j =1;j<=N;j++){
        sum = 0;
        for(int i =1;i<=N;i++){
            sum = sum + arr[i][j];
            
        }
        if(sum > max_sum){
            max_sum = sum;
            col = j;
        }
       
    }
     cout << col << " " << max_sum << endl;

}