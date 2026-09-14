class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sp = 0;
        int tp = 0;

        while (sp < s.length() && tp < t.length()) {
            if (s[sp] == t[tp]) {
                sp++;
            }
            tp++;
        }

        return sp == s.length();
    }

    string findLongestWord(string s, vector<string>& dictionary) {
        string ans = "";

        for (string word : dictionary) {
            
            if (isSubsequence(word, s)) {
                
                if (word.length() > ans.length() ||
                    (word.length() == ans.length() && word < ans)) {
                    
                    ans = word;
                }
            }
        }

        return ans;
    }
};