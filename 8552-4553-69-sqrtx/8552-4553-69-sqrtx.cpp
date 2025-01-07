class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1)
            return x;

        int left = 1, right = x / 2;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if ((long long)mid * mid > x)
                right = mid - 1;
            else
                left = mid + 1;
        }
        return right;
    }
};