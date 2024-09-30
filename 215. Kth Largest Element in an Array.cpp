class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        priority_queue<int> pq;

        for (int i = 0; i < nums.size(); i++) {
            pq.push(nums[i]);
        }

        int cnt = 0, ans;

        for (int i = 0; i < nums.size(); i++) {
            cnt++;
            if (cnt == k) {
                ans = pq.top();
            }
            pq.pop();
        }

        return ans;
    }
};
