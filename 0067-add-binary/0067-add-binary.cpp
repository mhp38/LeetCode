class Solution {
public:
    string addBinary(string a, string b) {

        int sz = max(a.size(), b.size());
        while (a.size() < sz)
            a = '0' + a;
        while (b.size() < sz)
            b = '0' + b;

        string ans = "";
        int sum = 0;
        for (int i = sz - 1; i >= 0; i--) {
            sum = sum + (a[i] - '0') + (b[i] - '0');
            ans = (char)(sum % 2 + '0') + ans;
            sum /= 2;
        }
        if (sum == 1)
            ans = '1' + ans;
        return ans;
    }
};