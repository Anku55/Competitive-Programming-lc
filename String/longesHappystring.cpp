class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>>pq;
        if(a>0)pq.push({a,'a'});
        if(b>0)pq.push({b,'b'});
        if(c>0)pq.push({c,'c'});

        string s="";

        while(!pq.empty()){
            int curCount=pq.top().first;
            int curChar=pq.top().second;
            pq.pop();
            if(s.length()>=2 &&s[s.length()-1]==curChar&&s[s.length()-2]==curChar){
                if(pq.empty())break;
                int nextCount =pq.top().first;
                char nextChar=pq.top().second;
                pq.pop();
                s+=nextChar;
                nextCount--;
                if(nextCount>0)pq.push({nextCount,nextChar});
            }else{
                s+=curChar;
                curCount--;
                
            }
            if(curCount>0)pq.push({curCount,curChar});
        }
        return s;
    }
};