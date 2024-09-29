class Solution {
public:
    string customSortString(string order, string S) {
        vector<char> cnt(26, 0);
        string ans = "";

        for (char c : S)
            cnt[c - 'a']++;
        for (char c : order) {
            while (cnt[c - 'a']-- > 0)
                ans.push_back(c);
        }
        for (char c : S) {
            while (cnt[c - 'a']-- > 0)
                ans.push_back(c);
        }
        return ans;
    }
};
