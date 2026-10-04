class Solution {
public:
    int minRotations(string s) {
        int current=0;
        int answer=0;

        for(int i=0;i<s.length();i++){
            int  num=s[i]-'0';
            int difrenc=abs(current-num);
            answer+=min(difrenc,10-difrenc);
            current=num;
        }
        return answer;
    }
};