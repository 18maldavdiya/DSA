#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count =0;
    int temp =0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            count++;
            temp = max(count, temp);
        }
        else{
            count = 0;
        }
    }
    cout << temp << endl;

}