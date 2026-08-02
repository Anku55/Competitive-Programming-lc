using ll = long long;
class Solution {
public:
    vector<int> countTasks(vector<int>& tasks, vector<int>& shifts) {

        int n = tasks.size();
        vector<ll> pref(n + 1, 0);
        for (int i = 0; i < n; i++) {
            pref[i + 1] = pref[i] + tasks[i];
        }
        vector<int> ans;

        ll tt = pref[n];
        ll cr = 0;

        for (int i = 0; i < shifts.size(); i++) {
            cr += shifts[i];

            if (cr >= tt) {
                ans.push_back(0);
                cr = 0;
                continue;
            }

            int idx = upper_bound(pref.begin(), pref.end(), cr) - pref.begin();

            ans.push_back(n - idx + 1);
        }

        return ans;
    }
};