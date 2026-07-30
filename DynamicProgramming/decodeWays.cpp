class Solution {
public:
    int fun(int i,string &s ,int &n){
        if(i==n)return 1;
        if(s[i]=='0')return 0;

        int one=fun(i+1,s,n);

        if(i+1<n){
            if(s[i]=='1'||(s[i]=='2'&&s[i+1]<='6')){
                one+=fun(i+2,s,n);
            }
        }

        return one;
    }
    int numDecodings(string s) {
        int n=s.length();
        return fun(0,s,n);
        
    }
};