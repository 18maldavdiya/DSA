#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--) {
        string s;
        cin >> s;

        int flag = 0;

        for(int i = 0; i < s.size(); i++){
            int count = 0;

            for(int j = 0; j < s.size(); j++){
                if(s[i] == s[j]){
                    count++;
                }
            }

            if(count == 1){
                cout << s[i] << endl;
                flag = 1;
                break;
            }
        }

        if(flag == 0){
            cout << -1 << endl;
        }
    }
}