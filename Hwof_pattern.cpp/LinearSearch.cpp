#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    
    return -1;
}

int main() {
    
    int n;
    cin >> n;

    int arr[100];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    int result = linearSearch(arr, n, target);

    if(result != -1)
        cout << "Element found at index " << result;
    else
        cout << "Element not found";

    return 0;
}