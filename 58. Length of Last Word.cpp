class Solution {
public:
    int lengthOfLastWord(string s) {
        int sz = s.size();
        int cnt = 0, flag = 0;
        for (int i = sz - 1; i >= 0; i--) {
            if (flag == 0 && s[i] == ' ') {
                continue;
            }
            if (s[i] != ' ') {
                flag = 1;
                cnt++;
            } else
                break;
        }
        return cnt;
    }
};
