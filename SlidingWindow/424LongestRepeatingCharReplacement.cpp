class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int j=0;
        int Char[26]={0};
        int Len=0;
        int mFreq=0;
        for(int i=0;i<s.length();i++){
            Char[s[i]-'A']++;
            mFreq=max(mFreq,Char[s[i]-'A']);
            if((i-j+1)-mFreq<=k){
                Len=max(Len,i-j+1);
            }else{
                Char[s[j]-'A']--;
                j++;

            }


            
        }

        return Len;
        
    }
};