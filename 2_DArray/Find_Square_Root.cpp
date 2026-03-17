#include<bits/stdc++.h>
using namespace std;
int squareRoot(int A) {
    for(int i = 1; i<A; i++){
        int n = i * i;
        if(n == A){
            return i;
        }
    }
    return -1;
        
}
int main () {
        int A;
        cin >> A;
        cout << squareRoot(A);
        
	return 0;
}