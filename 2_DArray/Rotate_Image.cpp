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
	for(int i = n-1 ; i>=0;i--)
     {   
       for(int j = 0 ;j<n ;j++)
    	{   
            cout<<arr[j][i]<<" ";
         }
		 cout<<endl;
     }

 
	return 0;
}