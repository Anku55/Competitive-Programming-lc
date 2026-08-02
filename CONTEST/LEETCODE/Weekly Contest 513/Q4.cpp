using ll = long long;
#define pb push_back
class Solution {
public:
    ll merge(vector<ll>& pref, int l, int mid, int r) {
        long long cnt = 0;
        int j = mid + 1;
        for (int i = l; i <= mid; i++) {
            while (j <= r && pref[j] <= pref[i]) {
                j++;
            }
            cnt += j - (mid + 1);
        }

        vector<ll> tp;
        int i = l;
        j = mid + 1;
        while (i <= mid && j <= r) {
            if (pref[i] <= pref[j]) {
                tp.pb(pref[i]);
                i++;
            } else {
                tp.pb(pref[j]);
                j++;
            }
        }
        while (i <= mid) {
            tp.pb(pref[i]);
            i++;
        }
        while (j <= r) {
            tp.pb(pref[j]);
            j++;
        }
        for (int i=l;i<=r;i++){
            pref[i]=tp[i-l];
        }
        return cnt;
    }
    ll ms(vector<ll>& pref, int l, int r) {
        if (l >= r) {
            return 0;
        }
        int mid = (l + r) / 2;
        ll cnt = 0;
        cnt += ms(pref, l, mid);
        cnt += ms(pref, mid + 1, r);
        cnt += merge(pref, l, mid, r);
        return cnt;
    }
    long long countRatioSubarrays(vector<int>& nums, int a, int b) {
        int n = nums.size();
        vector<ll> pref(n + 1, 0);
        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 0) {
                pref[i + 1] = pref[i] + b;
            } else {
                pref[i + 1] = pref[i] - a;
            }
        }
        return ms(pref, 0, n);
    }
};