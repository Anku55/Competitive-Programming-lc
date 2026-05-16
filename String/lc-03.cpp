#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int l=0;
        int r=0;
        int n=s.length();
        int hash[256]={0};
        int maxLen=0;
        while(r<n){
            hash[s[r]]++;
            while(hash[s[r]]>1){
                hash[s[l]]--;
                l++;
            }
            int len = r - l + 1;
            maxLen = max(maxLen, len);
            r++;
            
        }

        return maxLen;
        
    }
};

int main(){
    string s;
    cin>>s;
    Solution ans;

    cout<<ans.lengthOfLongestSubstring(s)<<endl;
    


    return 0;
}