class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        for (auto a : nums)
            mp[a]++;
        priority_queue<pair<int, int>> pq;
        for (auto it : mp)
            pq.push({it.second, it.first});
        vector<int> res;
        for (int i = 0; i < k; i++) {
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};
