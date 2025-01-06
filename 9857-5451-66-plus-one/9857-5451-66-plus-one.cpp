class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int sz = digits.size();
        for (int i = sz - 1; i >= 0; i--) {
            digits[i] += 1;
            digits[i] %= 10;
            if (digits[i] != 0)
                return digits;
        }

        digits.insert(digits.begin(),1);
        return digits;
    }
};