class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_map<char, int> mp;
        for (auto c : S)
            ++mp[c];

        int cnt = 0;
        for (auto c : J)
            cnt += mp[c];
        return cnt;
    }
};
