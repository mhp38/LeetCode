class Solution {
public:
    bool isSubsequence(string s, string t) {
        int lnt = t.size();
        int lns = s.length();

        int j = 0;
        for (int i = 0; i < lnt; i++) {
            if (t[i] == s[j])
                j++;
        }
        return j == lns;
    }
};
