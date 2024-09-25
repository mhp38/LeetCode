class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans;
        int ln = nums.size();
        unordered_set<int>visited;

        for(int i=0;i<ln;i++){
            if(visited.count(nums[i])){
                ans = nums[i];
            }
            visited.insert(nums[i]);
        }

        return ans;
    }
};
