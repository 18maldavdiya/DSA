#include <iostream>
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
	int top = 0;
	int bottom = M-1;
	int left = 0;
	int right = N-1;

    while(left<=right && top<= bottom){
		for(int i = top; i <= bottom; i++){
            cout << arr[i][left] << ", ";
        }
        left++;
		for(int i = left; i <= right; i++){
            cout << arr[bottom][i] << ", ";
        }
        bottom--;
		if(top<=bottom){
			for(int i = bottom; i >= top; i--){
            cout << arr[i][right] << ", ";
        }
        right--;
		for(int i = right; i >= left; i--){
            cout << arr[top][i] << ", ";
        }
        top++;
		}
		
		
	}
    cout<<"END";

}