#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main () {
	int r =0;
	int c = 0;
	cin>>r>>c;
	vector<vector<int>> arr(r,vector<int>(c));
	for(int i=0;i<r;i++){
		for(int j =0;j<c;j++){
			cin>>arr[i][j];
		}
	}
	for(int i = 0; i < r; i++){
		sort(arr[i].begin(), arr[i].end());
	}
	for(int i =0;i<r;i++){
		for(int j =0;j<c;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}