class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int sz = nums.size();
        vector<string> v;
        if (sz == 0)
            return v;

        int last = nums[0];

        for (int i = 1; i <= sz; i++) {
            if (i < sz && nums[i] == nums[i - 1] + 1)
                continue;

            if (last == nums[i - 1]) {
                v.push_back(to_string(nums[i - 1]));
            } else {
                v.push_back(to_string(last) + "->" + to_string(nums[i - 1]));
            }

            if (i < sz)
                last = nums[i];
        }
        return v;
    }
};