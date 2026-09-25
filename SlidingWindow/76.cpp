class Solution {
public:
    string minWindow(string s, string t) {
        int hash[256] = {0};
        int l = 0;
        int r = 0;
        int minlen = INT_MAX;
        int sindex = -1;
        int m = t.length();
        int n = s.length();
        int cnt = 0;

        for(int i = 0; i < t.length(); i++){
            hash[t[i]]++;
        }

        while(r < s.length()){
            if(hash[s[r]] > 0) cnt = cnt + 1;
            hash[s[r]]--;
            r++;

            while(cnt == t.length()){
                if(r - l < minlen){
                    minlen = r - l;
                    sindex = l;
                }
                hash[s[l]]++;          // FIX
                if(hash[s[l]] > 0) cnt = cnt - 1;  // FIX
                l++;                   // FIX
            }
        }
        return sindex == -1 ? "" : s.substr(sindex, minlen);
    }
};