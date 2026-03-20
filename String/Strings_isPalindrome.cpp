#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;

    string original = s;  // original store

    reverse(s.begin(), s.end());  // reverse

    if(s == original){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }

    return 0;
}