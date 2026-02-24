#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    int total = 0;

    // Input
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        total += arr[i];
    }

    int leftsum = 0;

    for(int i = 0; i < n; i++){
        int rightsum = total - leftsum - arr[i];

        if(leftsum == rightsum){
            cout << "Pivot Index: " << i;
            return 0;
        }

        leftsum += arr[i];
    }

    cout << "-1";  // If no pivot found
}