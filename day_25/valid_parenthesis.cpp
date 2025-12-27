class Solution {
public:
    bool isValid(string s) {
        if (s.size() == 1)
            return false;
        stack<char> st;
        int open = 0;
        for (char c : s) {
            // if (st.empty())
            //     st.push(c);
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
                open++;
            } else {
                if
                     (!st.empty() && ((st.top() == '(' && c == ')') ||
                                       st.top() == '{' && c == '}' ||
                                       st.top() == '[' && c == ']')) {
                        st.pop();
                        open--;
                    }
                else
                    return false;
            }
        }
        if (open == 0)
            return true;
        return false;
    }
};