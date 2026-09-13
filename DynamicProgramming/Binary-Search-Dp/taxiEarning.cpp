class Solution {
public:

    int m;
    vector<int> nextIdx;
    vector<long long> dp;

    int findNext(vector<vector<int>>& rides, int end) {

        int low = 0;
        int high = m - 1;
        int result = m;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (rides[mid][0] >= end) {
                result = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return result;
    }

    long long fun(vector<vector<int>>& rides, int i) {

        if (i >= m) {
            return 0;
        }

        if (dp[i] != -1) {
            return dp[i];
        }

        long long notTake = fun(rides, i + 1);

        long long profit =
            rides[i][1] - rides[i][0] + rides[i][2];

        long long take =
            profit + fun(rides, nextIdx[i]);

        return dp[i] = max(take, notTake);
    }

    long long maxTaxiEarnings(int n, vector<vector<int>>& rides) {

        m = rides.size();

        sort(rides.begin(), rides.end());

        nextIdx.resize(m);

        for (int i = 0; i < m; i++) {
            nextIdx[i] = findNext(rides, rides[i][1]);
        }

        dp.assign(m, -1);

        return fun(rides, 0);
    }
};