#include<iostream>
using namespace std;
int main(){
 int M,N;
	cin>>M>>N;
	
    int arr[30][30];
    for(int i = 0;i<M;i++){
        for(int j=0;j<N;j++){
            cin>>arr[i][j];
        }
    }
int x;
cin>>x;
int flage =0;
for(int i = 0 ; i < M ; i++)
{
    for(int j = 0 ; j < N ;j++ )
    {
        if(x==arr[i][j])
        {
           flage == 1;
        }
    }
    cout<<endl;
}
if(flage == 1)
{
    cout<<"1"<<endl;
}
else
{
    cout<<"0"<<endl;
}
return 0;
}