class Solution {
public:
    bool isValid(string s) {
        int sz = s.size();
        if (sz % 2 == 1)
            return false;
        stack<char> st;
        for (auto it : s) {
            if (it == '(' || it == '{' || it == '[')
                st.push(it);
            else {
                if (st.empty())
                    return false;
                else {
                    char c = st.top();
                    st.pop();
                    if ((c == '(' && it == ')') || (c == '{' && it == '}') ||
                        (c == '[' && it == ']'))
                        continue;
                    else
                        return false;
                }
            }
        }
        return true == st.empty();
    }
};