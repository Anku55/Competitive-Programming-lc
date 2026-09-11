class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int val) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            int r=((nums[i]%val)+val)%val;
            mp[r]++;
        }
        int mex=0;
        while(mp[mex%val]>0){
            mp[mex% val]--;
             mex++;
        }
       
        
        return mex;
    }
};