class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> vis;

        while (1) {
            int tmp = 0;
            vis.insert(n);
            while (n > 0) {
                tmp += (n % 10) * (n % 10);
                n /= 10;
            }
            n = tmp;
            if (n == 1 || vis.count(n)) {
                break;
            }

        }

        return n == 1;
    }
};
