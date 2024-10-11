class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> freq(28, 0);

        for (char c : chars) {
            freq[c - 'a']++;
        }

        int ans = 0;

        for (string word : words) {
            if (ok(word, freq))
                ans += word.size();
        }

        return ans;
    }

private:
    bool ok(string& s, vector<int>& freq) {
        vector<int> f(28, 0);

        for (char c : s)
            f[c - 'a']++;

        for (int i = 0; i < 26; i++) {
            if (f[i] > freq[i])
                return false;
        }
        return true;
    }
};
