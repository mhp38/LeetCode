class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mxProd = 1;
        int mnProd = 1;
        int ans = INT_MIN;

        for (int n : nums) {
            // If n is negative, swap max and min
            // Because multiplying by negative flips them
            if (n < 0)
                swap(mxProd, mnProd);
            mxProd = max(n, mxProd * n);
            mnProd = min(n, mnProd * n);

            ans = max(ans, mxProd);
        }
        return ans;
    }
};