class Solution {
public:
    int findTheLongestSubstring(string s) {
        unordered_map<int, int> mp;

        mp[0] = -1;

        int mask = 0;
        int ans = 0;

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == 'a')
                mask ^= (1 << 0);
            else if (s[i] == 'e')
                mask ^= (1 << 1);
            else if (s[i] == 'i')
                mask ^= (1 << 2);
            else if (s[i] == 'o')
                mask ^= (1 << 3);
            else if (s[i] == 'u')
                mask ^= (1 << 4);

            if (mp.count(mask)) {
                ans = max(ans, i - mp[mask]);
            } else {
                mp[mask] = i;
            }
        }

        return ans;
    }
};

/*
Important Condition

Every vowel should appear an even number of times.

Therefore:

Current Mask == Previous Mask

Store the first occurrence of every mask.
*/

/*
Key Learning

For finding the longest substring, always store the first occurrence of a state.

Same state again
        ↓
All characters between them have even frequency

*/