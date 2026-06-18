class Solution {
public:
    int fun(int ind1 , int ind2 ,string s, string l){
        if(ind1<0||ind2<0){
            return 0;
        }
        if(s[ind1]==l[ind2]){
            return 1+fun(ind1-1,ind2-1,s,l);

        }

        return max(fun(ind1-1,ind2,s,l),fun(ind1,ind2-1,s,l));

    }
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.length();
        int m=text2.length();

        return fun(n-1,m-1,text1,text2);
        
    }
};