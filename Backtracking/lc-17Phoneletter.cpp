class Solution {
public:
vector<string> mp={
    "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"
};
    vector<string>ans;
    void fun(int ind ,string cur,string digits){
        if(ind==digits.length()){
            ans.push_back(cur);
        }
        if(ind>=digits.length())return;
        string temp=mp[digits[ind]-'0'];
        for(char c :temp){
            cur+=c;
            fun(ind+1,cur,digits);
            cur.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
         fun(0,"",digits);
        return ans;
    }
};