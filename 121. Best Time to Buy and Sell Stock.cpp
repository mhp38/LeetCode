class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn = INT_MAX;
        int mx = INT_MIN;
        int ans = 0;

        for (int i = 0; i < prices.size(); i++) {
            mn = min(mn, prices[i]);
            int dif = (prices[i] - mn);

            if (dif > mx) {
                ans = dif;
                mx = dif;
            }
        }
        return ans;
    }
};
