#include<iostream>
using namespace std;
int main() {
	int M,N;
    int arr[10][10];
    cin>>M>>N;
	for(int i = 0;i<=M; i++){
		for(int j = 0;j<=M;j++){
			cout<<arr[i][j];
		}
	}
	int left = 0;
	int top = 0;
	int bottom =M-1;
	int right = N-1;
	while(left !=n){
		for(int i = top; i <= bottom; i++){
            cout << arr[i][left] << ", ";
        }
        left++;
		for(int i =bottom ; i>=top ; i--){
			cout<<[i][left]<< ", ";
		}
		left++;
	}
	return 0;
}