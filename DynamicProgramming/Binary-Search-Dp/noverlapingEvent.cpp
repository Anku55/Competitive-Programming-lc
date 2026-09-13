class Solution {
public:
    int n;
    vector<int> nextIdx;
    vector<vector<int>> dp;
    int findNext(vector<vector<int>>& events, int end) {
        int low = 0;
        int high = n - 1;
        int result = n;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (events[mid][0] > end) {
                result = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return result;
    }
    int fun(vector<vector<int>>& events, int i, int k) {
        if (k == 0 || i >= n) {
            return 0;
        }
        if (dp[i][k] != -1)
            return dp[i][k];
        int notTake = fun(events, i + 1, k);
        int take = events[i][2] + fun(events, nextIdx[i], k - 1);

        return dp[i][k] = max(take, notTake);
    }
    int maxTwoEvents(vector<vector<int>>& events) {
        int k = 2;
        n = events.size();
        sort(events.begin(), events.end());
        nextIdx.resize(n);
        for (int i = 0; i < n; i++) {
            int end = events[i][1];
            nextIdx[i] = findNext(events, end);
        }
        dp.assign(n + 1, vector<int>(k + 1, -1));
        return fun(events, 0, k);
    }
};