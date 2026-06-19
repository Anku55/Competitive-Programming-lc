class Solution {
public:
     int longestCommonSubsequence(string s, string l) {
        int n = s.length();
        int m = l.length();


        vector<int>prev(m+1,0),curr(m+1,0);

        for (int i = 0; i <= m; i++) {
            prev[i] = 0;
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (s[i - 1] == l[j - 1]) {
                    curr[j] = 1 + prev[j - 1];
                }else {
                    curr[j] = max(prev[j], curr[j - 1]);
                }
            }
            prev=curr;
        }

        return prev[m];

    }    
    int longestPalindromeSubseq(string s) {
        string rev=s;
        reverse(rev.begin(),rev.end());
        return longestCommonSubsequence(s,rev);
        
    }
};