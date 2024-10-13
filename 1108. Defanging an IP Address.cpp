class Solution {
public:
    string defangIPaddr(string address) {

        int sz = address.size();
        string res = "";

        for (int i = 0; i < sz; i++) {
            if (address[i] == '.') {
                res += '[';
                res += '.';
                res += ']';
            } else
                res += address[i];
        }
        return res;
    }
};
