#include<iostream>
using namespace std;
int main(){
 int M,N;
	cin>>M>>N;
	
    int arr[10][10];
    for(int i = 0;i<M;i++){
        for(int j=0;j<N;j++){
            cin>>arr[i][j];
        }
    }
int x;
cin<<x;
for(int i = 0 ; i < M ; i++)
{
    for(int j = 0 ; j < N ;j++ )
    {
        if(x==arr[i][j])
        {
           return 1;
        }
    }
    cout<<endl;
}
return 0;
}