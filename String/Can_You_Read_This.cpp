// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s = "ILoveIndia";
//     string s2 = " ";

//     for(int i =0;i<s.length();i++){
//         if(isupper(s[i])){
//             s2.push_back(s[i]);
//         }
//     }
//     cout<<s2;
// }
#include<iostream>
using namespace std;
int main(){
string s ="aaabbdccsaa";
string ans;
for(int i = 0 ;i<s.size();i++)
{
    int count =1 ;
    for(int j = i+1 ;j<s.size();j++)
    {
        if(s[i]==s[j])
        {
            count++;
        }
        else
        {
            break;
        }
    }
    ans.push_back(s[i]);
    ans.push_back(count);

    i=count;
}
cout<<ans;

return 0;
}