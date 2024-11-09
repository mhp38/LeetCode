class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // take a map and when you will find the same number , subtracts and
        // check
        unordered_map<int, int> mp;
        int ln = nums.size();

        for (int i = 0; i < ln; i++) {
            if (mp.count(nums[i]) == 1) {
                int dif = abs(i - mp[nums[i]]);
                if (dif <= k)
                    return true;
            }

            mp[nums[i]] = i;
        }
        return false;
    }
};
