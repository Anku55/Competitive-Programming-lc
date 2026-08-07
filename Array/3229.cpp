class Solution {
public:
    long long minimumOperations(vector<int>& nums, vector<int>& target) {
        int n=nums.size();
        vector<int>dif(n,0);
        for(int i=0;i<n;i++){
            dif[i]=target[i]-nums[i];
        }
        int prev=0;
        int cur=0;
        long long res=0;

        for(int i=0;i<n;i++){
            cur=dif[i];
            if(prev<0&&cur>0 ||prev>0 && cur<0){
                res+=abs(cur);
            }else if(abs(cur)>abs(prev)){
                res+=abs(cur-prev);
            }
            prev=cur;
        }
        return res;
    }
};