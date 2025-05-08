class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();


        vector<int> result(n, 1);

        // First pass: calculate prefix products (product of all elements to the left)
        int prefix = 1;  // Start with 1 because there are no elements to the left of index 0
        for (int i = 0; i < n; i++) {
            result[i] = prefix;       // Store the product of all elements to the left of i
            prefix = prefix * nums[i]; // Update prefix to include nums[i] for next index
        }

        // Second pass: calculate postfix products (product of all elements to the right)
        int postfix = 1;  // Start with 1 because there are no elements to the right of the last index
        for (int i = n - 1; i >= 0; i--) {
            result[i] = result[i] * postfix;  // Multiply the left product (already stored) with the right product
            postfix = postfix * nums[i];      // Update postfix to include nums[i] for the next iteration (to the left)
        }

        // At this point, result[i] holds product of all elements except nums[i]
        return result;
    }
};

