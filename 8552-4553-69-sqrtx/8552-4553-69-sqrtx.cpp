class Solution {
public:
    int mySqrt(int x) {
        for (int i = 1;; i++) {
            long long mul = (long long) i * i;
            if (mul == x)
                return i;
            if (mul > x) {
                return i - 1;
            }
        }
    }
};