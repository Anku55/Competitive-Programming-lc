class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        int n=target.size();
        int prev=0;
        int cur=0;
        int res=0;
        for(int i=0;i<n;i++){
            cur=target[i];
            if(cur>prev){
                res+=cur-prev;

            }
            prev=cur;
        }

        return res;
        
    }
};