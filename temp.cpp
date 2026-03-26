#include<iostream>
using namespace std;
int digit(string nums1)
{
    int sum= 0 ;
    for(int i = 0 ; i< nums1.size();i++)
    {
        sum = sum*10 + nums1[i];
    }
    cout<<sum<<endl;
  return sum ;
}

int main()
{
string num1 = "11";
string num2 = "22";
int n =digit(num1);
int m =digit(num2);
int a= m*n;
cout<<a<<endl;
string ans;
ans.push_back(a);
cout<<ans; 
}