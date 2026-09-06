class Solution {
public:
    long long wonderfulSubstrings(string word) {
        vector<long long> freq(1 << 10, 0);

        int mask = 0;
        long long ans = 0;

        freq[0] = 1;

        for (char ch : word) {

            int bit = ch - 'a';

            mask ^= (1 << bit);

            // All characters appear even number of times
            ans += freq[mask];

            // Exactly one character appears odd number of times
            for (int i = 0; i < 10; i++) {

                int target = mask ^ (1 << i);

                ans += freq[target];
            }

            freq[mask]++;
        }

        return ans;
    }
};