// 3405. Count the Number of Arrays with K Matching Adjacent Elements

class Solution {
public:
    const long long mod = 1e9 + 7;

    long long power(long long a, long long b) {
        long long res = 1;

        while (b) {
            if (b & 1)
                res = res * a % mod;

            a = a * a % mod;
            b >>= 1;
        }

        return res;
    }

    int countGoodArrays(int n, int m, int k) {

        vector<long long> fact(n + 1);
        vector<long long> invFact(n + 1);
        fact[0] = 1;

        for (int i = 1; i <= n; i++) {
            fact[i] = fact[i - 1] * i % mod;
        }

        invFact[n] = power(fact[n], mod - 2);
        for (int i = n; i >= 1; i--) {
            invFact[i - 1] = invFact[i] * i % mod;
        }
        long long ways = fact[n - 1];

        ways = ways * invFact[k] % mod;
        ways = ways * invFact[n - 1 - k] % mod;

        // First element
        ways = ways * m % mod;

        ways = ways * power(m - 1, n - k - 1) % mod;

        return ways;
    }
};