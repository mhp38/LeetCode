class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int sz = nums.size();
        sort(nums.begin(),nums.end());
       // vector<int> vis(sz, 0);
        for (int i = 1; i < sz; i++) {
            if(nums[i]==nums[i-1])return true;
        }
        return false;
    }
};