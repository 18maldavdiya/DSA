#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i =1;i<=n;i++){
        for(int j =1;j<=n;j++){
            if(i==1 || i==n || j==1 ||j==n){
                cout<<"* \t";
            }
            else if(i==2 || i==n-1 || j==2 ||j==n-1){
                cout<<"# \t";
            }
            else{
                cout<<"@ \t";
            }
        }
        cout<<endl;
    }
}