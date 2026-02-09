#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {8, 13, -21, 49};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (ans > arr[i]) {
            ans = arr[i];
        }
    }

    cout << ans << endl;
    return 0;
}
