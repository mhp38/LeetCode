class Solution {
public:
    bool isPalindrome(string s) {

        // transform(s.begin(), s.end(), s.begin(), ::tolower);
        int sz = s.size();
        for (int i = 0; i < sz; i++) {
            if (s[i] >= 'A' && s[i] <= 'z')
                s[i] = tolower(s[i]);
        }
        string st2 = "";
        for (int i = 0; i < sz; i++) {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
                st2 += s[i];
            else
                continue;
        }
        if (palchk(st2))
            return true;
        else
            return false;
    }

private:
    bool palchk(string s) {
        int sz = s.size();
        for (int i = 0; i < (sz / 2); i++) {
            if (s[i] != s[sz - i - 1]) {
                return false;
            }
        }
        return true;
    }
};
