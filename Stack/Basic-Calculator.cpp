class Solution {
public:
    int calculate(string s) {
        stack<int> st;

        int result = 0;
        long long num = 0;
        int sign = 1;

        for (char c : s) {

            if (isdigit(c)) {
                num = num * 10 + (c - '0');
            }

            else if (c == '+' || c == '-') {
                result += num * sign;
                num = 0;

                sign = (c == '+') ? 1 : -1;
            }

            else if (c == '(') {
                st.push(result);
                st.push(sign);

                result = 0;
                sign = 1;
            }

            else if (c == ')') {
                result += num * sign;
                num = 0;

                int prevSign = st.top();
                st.pop();

                int prevResult = st.top();
                st.pop();
                result = prevResult + prevSign * result;
            }
        }
        result += num * sign;
        return result;
    }
};