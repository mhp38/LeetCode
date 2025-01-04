class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0 )
            return false;

        long long res = 0, tmp = x;

        while (tmp > 0) {
            res = res * 10 + (tmp % 10);
            tmp /= 10;
        }
        return res == x;
    }
};