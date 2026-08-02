class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int n= nums.size();
        long long ans=0;
        for(int i=0;i<n;i++){
            int ev=0;
            int od=0;
            for(int j=i;j<n;j++){
                if(nums[j]%2){
                    od++;
                }else{
                    ev++;
                }

                if(od>0&& 1LL*b*ev<=1LL*a*od){
                    ans++;
                }
            }
        }

        return ans;
        
        
    }
};