
class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> fst(26, 0), snd(26, 0);
        int ln = s.size();

        for (int i = 0; i < ln; i++) {
            fst[s[i] - 'a']++;
            snd[t[i] - 'a']++;
        }

        int res = 0;

        for (int i = 0; i < 26; i++) {
            if (fst[i] != 0 && fst[i] > snd[i]) {
                res += (fst[i] - snd[i]);
            }
        }

        return res;
    }
};
