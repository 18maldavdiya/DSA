#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int l, r;
    cin >> l >> r;

    while(l < r) {
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;

        l++;
        r--;
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
