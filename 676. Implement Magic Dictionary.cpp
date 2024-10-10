class MagicDictionary {
public:
    vector<string> d;
    /** Initialize your data structure here. */
    MagicDictionary() { d.clear(); }

    /** Build a dictionary through a list of words */
    void buildDict(vector<string> dict) { d = dict; }

    bool check(string s1, string s2) {
        if (s1.size() != s2.size())
            return false;
        int cnt = 0;
        for (int i = 0; i < s1.size(); i++) {
            cnt += (s1[i] != s2[i]);
            if (cnt > 1)
                break;
        }
        return cnt == 1;
    }

    /** Returns if there is any word in the trie that equals to the given word
     * after modifying exactly one character */
    bool search(string word) {
        for (int i = 0; i < d.size(); i++) {
            if (check(word, d[i]))
                return true;
        }
        return false;
    }
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary* obj = new MagicDictionary();
 * obj->buildDict(dict);
 * bool param_2 = obj->search(word);
 */
