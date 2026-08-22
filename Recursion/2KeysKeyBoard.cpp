class Solution {
public:
    int fun(int cur, int clip, int n) {

        if (cur > n)
            return 1e9;

        if (cur == n)
            return 0;

        int paste = 1 + fun(cur + clip, clip, n);

        int copyPaste = 1 + 1 + fun(cur + cur, cur, n);

        return min(paste, copyPaste);
    }

    int minSteps(int n) {
        if (n == 1)
            return 0;

        return 1 + fun(1, 1, n);
    }
};