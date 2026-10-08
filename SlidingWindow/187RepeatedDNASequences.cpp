class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if (s.size() < 10) return {};

        unordered_map<char, int> mp = {
            {'A', 0}, {'C', 1}, {'G', 2}, {'T', 3}
        };

        unordered_set<int> seen, repeated;
        vector<string> res;

        int hash = 0;

        // First 9 chars
        for (int i = 0; i < 9; i++) {
            hash = (hash << 2) | mp[s[i]];
        }

        for (int i = 9; i < s.size(); i++) {
            hash = ((hash << 2) | mp[s[i]]) & ((1 << 20) - 1);

            if (seen.count(hash)) {
                repeated.insert(hash);
            } else {
                seen.insert(hash);
            }
        }

        for (int h : repeated) {
            int temp = h;
            string str = "";

            for (int i = 0; i < 10; i++) {
                int val = temp & 3;
                if (val == 0) str += 'A';
                else if (val == 1) str += 'C';
                else if (val == 2) str += 'G';
                else str += 'T';
                temp >>= 2;
            }

            reverse(str.begin(), str.end());
            res.push_back(str);
        }

        return res;
    }
};