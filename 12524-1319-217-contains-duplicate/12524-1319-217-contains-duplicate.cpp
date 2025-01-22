class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        int sz = nums.size();
        for (int i = 0; i < sz; i++) {
            if (mp[nums[i]] == 1)
                return true;
            mp[nums[i]] = 1;
        }
        return false;
    }
};