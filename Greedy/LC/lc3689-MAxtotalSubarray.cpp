#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int mini=nums[0];
        int maxi=nums[0];
        for(int i=1;i<=nums.size()-1;i++){
            mini=min(nums[i],mini);
            maxi=max(nums[i],maxi);
        }

        return (long long)(maxi-mini)*k;
        
    }
};

int main(){
    Solution s;
    vector<int>nums={4,2,5,1};
    int k=3;
    cout<<s.maxTotalValue(nums,k)<<"\n";

    return 0;
}