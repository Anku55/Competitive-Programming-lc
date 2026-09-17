class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int j = 0;
        int n = arr.size();
        vector<int> pre(n, 1e9);
        int sum = 0;
        int bestmin = 1e9;
        int result = 1e9;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            while (j < i && sum > target) {
                sum -= arr[j];
                j++;
            }
            if (sum == target) {
                int len = i - j + 1;
                if (j > 0 && pre[j - 1] != 1e9) {
                    result = min(result, len + pre[j - 1]);
                }
                bestmin = min(bestmin, len);
            }
            pre[i] = bestmin;
        }

        return result == 1e9 ? -1 : result;
    }
};