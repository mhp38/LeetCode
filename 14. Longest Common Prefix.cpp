class Solution {
public:
    string longestCommonPrefix(vector<string>& st) {
        string prefix = st[0];

        for (int i = 1; i < st.size(); i++) {
            string currentString = st[i];

            while (currentString.find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.size() - 1);
                if (prefix.size() == 0)
                    return "";
            }
        }

        return prefix;
    }
};
