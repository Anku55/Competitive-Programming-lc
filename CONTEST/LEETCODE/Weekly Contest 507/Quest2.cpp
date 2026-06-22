
class Solution {
public:
    int countValidSubarrays(vector<int>& nums, int x) {
        int cnt=0;
        for (int i = 0; i < nums.size(); i++) {
            long long sum = 0;
            for (int j = i; j < nums.size(); j++) {
                sum += nums[j];
                long long num=sum;
                
                if (num % 10 == x) {
                    long long first = num;
                   
                    while (first >= 10)
                        first /= 10;

                    long long last = num % 10;
                    if(last==x && first==x){
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};