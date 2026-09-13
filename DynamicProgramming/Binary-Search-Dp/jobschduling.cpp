class Solution {
public:
    int n;
    vector<int> nextIdx;
    int findNext(vector<vector<int>>& events, int end) {
        int low = 0;
        int high = n - 1;
        int result = n;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (events[mid][0] >= end) {
                result = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return result;
    }
    vector<int> dp;

    int fun(vector<vector<int>>& events, int i) {
        if ( i >= n) {
            return 0;
        }
        if (dp[i]!= -1)
            return dp[i];
        int notTake = fun(events, i + 1);
        int take = events[i][2] + fun(events, nextIdx[i]);

        return dp[i] = max(take, notTake);
    }
    int jobScheduling(vector<int>& startTime, vector<int>& endTime,
                      vector<int>& profit) {
        n = startTime.size();
        vector<vector<int>> events(n,vector<int>(3));
        for (int i = 0; i < n; i++) {
            events[i]={startTime[i], endTime[i], profit[i]};
        }
        sort(events.begin(), events.end());
        nextIdx.resize(n);
        for (int i = 0; i < n; i++) {
            int end = events[i][1];
            nextIdx[i] = findNext(events, end);
        }
        dp.assign(n + 1,-1);
        return fun(events, 0);
    }
};