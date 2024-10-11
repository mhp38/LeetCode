class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int sz = nums.size();
        int ln = sz / 2;
        map<int, int> mp;

        int ans;
        for (int i = 0; i < sz; i++) {
            mp[nums[i]]++;
        }
        for (auto it : mp) {
            if (it.second == ln) {
                ans = it.first;
                break;
            }
        }
        return ans;
    }
};
