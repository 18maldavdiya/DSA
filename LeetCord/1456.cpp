#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxVowels(string s, int k) {
        int count = 0;
        
        // First window
        for(int i = 0; i < k; i++) {
            if(isVowel(s[i])) count++;
        }
        
        int maxCount = count;
        
        // Sliding window
        for(int i = k; i < s.length(); i++) {
            // Add next char
            if(isVowel(s[i])) count++;
            
            // Remove previous char
            if(isVowel(s[i - k])) count--;
            
            maxCount = max(maxCount, count);
        }
        
        return maxCount;
    }
    
    bool isVowel(char c) {
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }
};

int main() {
    Solution obj;
    string s = "abciiidef";
    int k = 3;
    
    cout << obj.maxVowels(s, k) << endl; // Output: 3
    
    return 0;
}