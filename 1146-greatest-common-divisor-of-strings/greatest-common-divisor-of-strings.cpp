class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1)
            return "";
        else {
            int ln1 = str1.size();
            int ln2 = str2.size();

            string st = str1.substr(0, gcd(ln1, ln2));
            return st;
        }
    }
};