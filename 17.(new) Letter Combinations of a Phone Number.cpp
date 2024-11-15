class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if (digits.length() == 0)
            return result;
        result.push_back("");
        vector<string> v = {"",    "",    "abc",  "def", "ghi",
                            "jkl", "mno", "pqrs", "tuv", "wxyz"};
        for (int i = 0; i < digits.size(); i++) {
            string s = v[digits[i] - '0'];
            vector<string> temp;
            for (int j = 0; j < s.length(); j++)
                for (int k = 0; k < result.size(); k++)
                    temp.push_back(result[k] + s[j]);
            result = temp;
        }
        return result;
    }
};

