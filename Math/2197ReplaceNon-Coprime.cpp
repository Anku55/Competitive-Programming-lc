class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<int> ans;

        for (int num : nums) {
            while (!ans.empty()) {
                int g = gcd(ans.back(), num);

                if (g == 1)
                    break;

                long long prev = ans.back();
                ans.pop_back();

                num = (prev / g) * num;
            }

            ans.push_back(num);
        }

        return ans;
    }
};