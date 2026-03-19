#include<iostream>
#include<string>
using namespace std;

// Function for Run-Length Encoding
string compressString(string s) {
    string ans;

    for(int i = 0; i < s.size(); i++)
    {
        int count = 1;

        for(int j = i + 1; j < s.size(); j++)
        {
            if(s[i] == s[j])
                count++;
            else
                break;
        }

        ans.push_back(s[i]);
        ans.append(to_string(count));

        i = i + count - 1;  // skip processed chars
    }

    return ans;
}

int main(){
    string s = "aaabbdccsaa";

    string result = compressString(s);

    cout << result;

    return 0;
}