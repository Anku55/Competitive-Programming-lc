class Solution {
public:
    using ll = __int128;

    ll fun(ll firstHalf, bool isEven) {
        ll res = firstHalf;

        if (!isEven)
            firstHalf /= 10;

        while (firstHalf > 0) {
            res = res * 10 + firstHalf % 10;
            firstHalf /= 10;
        }

        return res;
    }

    string toString(ll x) {
        if (x == 0)
            return "0";

        string s;

        while (x > 0) {
            s.push_back('0' + x % 10);
            x /= 10;
        }

        reverse(s.begin(), s.end());

        return s;
    }

    string nearestPalindromic(string n) {

        ll len = n.length();

        ll firstHalfLen = (len % 2 == 0)
                        ? len / 2
                        : len / 2 + 1;

        ll firstHalf = 0;

        for (int i = 0; i < firstHalfLen; i++)
            firstHalf = firstHalf * 10 + (n[i] - '0');

        vector<ll> possibleResult;

        possibleResult.push_back(fun(firstHalf, len % 2 == 0));
        possibleResult.push_back(fun(firstHalf + 1, len % 2 == 0));
        possibleResult.push_back(fun(firstHalf - 1, len % 2 == 0));

        ll p = 1;

        for (int i = 1; i < len; i++)
            p *= 10;

        possibleResult.push_back(p - 1);

        p = 1;

        for (int i = 0; i < len; i++)
            p *= 10;

        possibleResult.push_back(p + 1);

        ll originalNum = 0;

        for (char c : n)
            originalNum = originalNum * 10 + (c - '0');

        ll diff = -1;
        ll result = 0;

        for (ll num : possibleResult) {

            if (num == originalNum)
                continue;

            ll currDiff;

            if (num > originalNum)
                currDiff = num - originalNum;
            else
                currDiff = originalNum - num;

            if (diff == -1 || currDiff < diff) {
                diff = currDiff;
                result = num;
            }
            else if (currDiff == diff) {
                result = min(result, num);
            }
        }

        return toString(result);
    }
};