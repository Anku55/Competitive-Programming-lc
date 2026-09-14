class Solution {
public:
    long long minimumSteps(string s) {

        int n=s.length();
        int ones=0;
        long long ans=0;
        for(int i=0;i<n;i++){
            ones+=s[i]-'0';
            if(s[i]=='0'){
                ans+=ones;
            }
        }
        return ans;
    }
};