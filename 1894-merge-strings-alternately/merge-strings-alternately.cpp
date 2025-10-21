class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int ln1 = word1.size();
        int ln2 = word2.size();

        int mn = min(ln1, ln2);
        int tot = mn * 2;
        string st = "";

        for (int i = 0, j = 0, k = 0; i < tot; i++) {

            if (i % 2 == 0) {
                st += word1[j];
                j++;
            } else {
                st += word2[k];
                k++;
            }
        }

        if (ln2 > ln1) {
            for (int i = mn; i <= ln2 - 1; i++) {
                st += word2[i];
            }
        }
        if (ln1 > ln2) {
            for (int i = mn; i <= ln1 - 1; i++) {
                st += word1[i];
            }
        }
        return st;
    }
};