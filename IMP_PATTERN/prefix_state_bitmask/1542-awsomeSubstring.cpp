class Solution {
public:
    int longestAwesome(string s) {
        vector<int> first(1 << 10, -2);

        first[0] = -1;

        int mask = 0;
        int ans = 0;

        for (int i = 0; i < s.size(); i++) {

            int digit = s[i] - '0';

            mask ^= (1 << digit);

            // All frequencies even
            if (first[mask] != -2) {
                ans = max(ans, i - first[mask]);
            }

            // Exactly one digit has odd frequency
            for (int bit = 0; bit < 10; bit++) {

                int target = mask ^ (1 << bit);

                if (first[target] != -2) {
                    ans = max(ans, i - first[target]);
                }
            }

            if (first[mask] == -2) {
                first[mask] = i;
            }
        }

        return ans;
    }
};

// Key Learning

// For palindrome-related frequency problems:

// All characters even
// OR
// Exactly one character odd

// In bitmask terms:

// XOR difference has <= 1 set bit