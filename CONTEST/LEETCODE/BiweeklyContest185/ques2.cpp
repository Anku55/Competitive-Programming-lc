class Solution {
public:
    int minLights(vector<int>& lights) {
        int n = lights.size();
        int res = 0;
        vector<int> arr(n + 1, 0);
        vector<int> visible(n, 0);
        for (int i = 0; i < n; i++) {

            if (lights[i] > 0) {
                int l = max(0, i - lights[i]);
                int r = min(n - 1, i + lights[i]);

                arr[l]++;

                if (r + 1 < n)
                    arr[r + 1]--;
            }
        }
        // mark visibilty
        int var = 0;
        for (int i = 0; i < n; i++) {
            var += arr[i];
            if (var > 0) {
                visible[i] = 1;
            }
        }
        int l = 0;
        while (l < n) {
            if (visible[l]) {
                l++;
                continue;
            }

            int len = 0;

           while (l < n && !visible[l]){
                len++;
                l++;
            }
            res+=(len+2)/3;
        }

        return res;
    }
};©leetcode