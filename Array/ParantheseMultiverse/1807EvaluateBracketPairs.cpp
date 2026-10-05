class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        int n = knowledge.size();
        unordered_map<string, string> mp;
        for (int i = 0; i < n; i++) {
            mp[knowledge[i][0]] = knowledge[i][1];
        }

        string ans = "";
        int start = -1;

        for (int i = 0; i < s.length(); i++) {

            if (s[i] == '(') {
                start = i;
            }

            else if (s[i] == ')' && start != -1) {
                string temp = s.substr(start + 1, i - start - 1);
                if(mp.find(temp)==mp.end()){
                    ans+='?';
                }else{
                    ans+=mp[temp];
                }

                start = -1;
            }
            if(start==-1&&s[i]!=')'){
                ans+=s[i];
            }
        }
        return ans;
    }
};