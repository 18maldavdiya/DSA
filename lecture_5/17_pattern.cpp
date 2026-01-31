#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int mid = n/2 + 1;

    for(int row = 1; row <= n; row++) {
        int i;

        // Decide value of i
        if(row <= mid)
            i = row;
        else
            i = n - row + 1;

        // Spaces
        for(int s = 1; s <= mid - i; s++) {
            cout << "  ";
        }

        // Descending numbers (i to 1)
        for(int num = i; num >= 1; num--) {
            cout << num << " ";
        }

        // Ascending numbers (1 to i)
        for(int num = 1; num <= i; num++) {
            cout << num << " ";
        }

        cout << endl;
    }

    return 0;
}



