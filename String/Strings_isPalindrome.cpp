#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int left = 0;
    int right = s.size() - 1;
    int flag =0;
    while(left<right){
        if(s[left] ==s[right]){
            flag = 1;
            break;  
        }
        left++;
        right--;
    }
    if(flag == 1){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

}