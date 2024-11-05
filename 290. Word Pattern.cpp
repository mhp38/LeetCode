class Solution {
public:
    bool wordPattern(string pattern, string str) {
        vector<string> words;
        map<string, char> word2pattern;
        map<char, string> pattern2word;

        int i, prev = 0;
        for (i = 0; i <= str.length(); i++) {
            if (str[i] == ' ' || str[i] == '\0') {
                words.push_back(str.substr(prev, i - prev));
                prev = i + 1;
            }
        }

        if (pattern.length() != words.size())
            return false;

        for (i = 0; i < words.size(); i++) {

            if (word2pattern.count(words[i]) == 1) {
                if (word2pattern[words[i]] != pattern[i])
                    return false;
            }
            if (pattern2word.count(pattern[i]) == 1) {
                if (pattern2word[pattern[i]] != words[i])
                    return false;
            }

            word2pattern[words[i]] = pattern[i];
            pattern2word[pattern[i]] = words[i];
        }

        return true;
    }
};
