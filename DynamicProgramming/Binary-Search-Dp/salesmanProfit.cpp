class Solution {
public:
    int m;
    vector<int> nextIdx;
    vector<int> dp;

    int findNext(const vector<vector<int>>& offers, int end) {
        int l = 0;
        int r = m - 1;
        int res = m;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (offers[mid][0] > end) {
                res = mid;
                r = mid - 1;
            } 
            else {
                l = mid + 1;
            }
        }

        return res;
    }

    int fun(const vector<vector<int>>& offers, int i) {
        if (i >= m) {
            return 0;
        }

        if (dp[i] != -1) {
            return dp[i];
        }

        // Don't take
        int notTake = fun(offers, i + 1);

        // Take
        int j = nextIdx[i];
        int gold = offers[i][2];

        int take = gold + fun(offers, j);

        return dp[i] = max(take, notTake);
    }

    int maximizeTheProfit(int n, vector<vector<int>>& offers) {
        m = offers.size();

        sort(offers.begin(), offers.end());

        nextIdx.resize(m);

        for (int i = 0; i < m; i++) {
            int end = offers[i][1];
            nextIdx[i] = findNext(offers, end);
        }

        dp.assign(m, -1);

        return fun(offers, 0);
    }
};