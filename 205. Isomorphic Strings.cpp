class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp1, mp2;
        int ln = s.size();
        for (int i = 0; i < ln; i++) {

            if (mp1.count(s[i]) == 1) {
                if (mp1[s[i]] != t[i])
                    return false;
            } else if (mp2.count(t[i]) == 1) {
                if (mp2[t[i]] != s[i])
                    return false;
            }
            mp1[s[i]] = t[i];
            mp2[t[i]] = s[i];
        }
        return true;
    }
};
