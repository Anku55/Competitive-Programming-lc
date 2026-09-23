class Solution {
public:
    int n;

    bool isPalindrome(string& s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r])
                return false;

            l++;
            r--;
        }

        return true;
    }

    void fun(string& s, int idx, vector<string>& cur,
             vector<vector<string>>& res) {

        if (idx == n) {
            res.push_back(cur);
            return;
        }

        for (int i = idx; i < n; i++) {

            if (isPalindrome(s, idx, i)) {

                cur.push_back(s.substr(idx, i - idx + 1));

                fun(s, i + 1, cur, res);

                cur.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {

        n = s.size();

        vector<string> cur;
        vector<vector<string>> res;

        fun(s, 0, cur, res);

        return res;
    }
};