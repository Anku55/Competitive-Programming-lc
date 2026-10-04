ques3.cpp
class Solution {
public:
    int minRotations(int n, string s) {
        auto dist =[](char a,char b){
            int x=abs((a-'0')-(b-'0'));

            return min(x,10-x);
        };
        vector<int>suf(n,0);
        for(int i=n-2;i>=0;i--){
            suf[i]=suf[i+1]+dist(s[i],s[i+1]);
        }

        int ans=1e9;
        int pre=0;
        for(int i=0;i<=n;i++){
            int cur=0;
            if(i==0){
                cur=dist('0',s[n-1])+suf[0];
            }else if(i==n){
                cur=pre;
            }else{
                cur=pre+dist(s[i-1],s[n-1])+suf[i];
                
            }
            ans=min(ans,cur);
            if(i<n){
                if(i==0){
                    pre=dist('0',s[0]);
                }else{
                    pre+=dist(s[i-1],s[i]);
                }
            }
        }
        return ans;
        
    }
};