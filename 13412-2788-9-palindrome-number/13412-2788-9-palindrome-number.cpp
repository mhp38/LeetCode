class Solution {
public:
    bool isPalindrome(int x) {
        string st = to_string(x);
        int sz = st.size();
        int mid = sz / 2;

        for (int i = 0; i <= mid; i++) {
            if (st[i] != st[sz - i - 1])
                return false;
            else
                continue;
        }
        return true;
    }
};