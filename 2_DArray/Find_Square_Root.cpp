#include<bits/stdc++.h>
using namespace std;
int squareRoot(int A) {
    for(int i = 1; i<A; i++){
        int n = i * i;
        if(n == A){
            return i;
        }
    }
        
}
int main () {
        int A;
        cin >> A;
        cout << squareRoot(A);
        
	return 0;
}