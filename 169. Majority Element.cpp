class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int sz = nums.size();
        int target = sz / 2, ans;
        map<int, int> mp;
        for (int i = 0; i < sz; i++) {
            mp[nums[i]]++;
        }
        for (auto it : mp) {
            if (it.second > target)
                ans = it.first;
        }
        return ans;
    }
};
