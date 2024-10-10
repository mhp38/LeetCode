struct TrieNode {
    bool endmark;
    TrieNode* next[30];

    TrieNode() {
        endmark = false;

        for (int i = 0; i < 26; i++) {
            next[i] = NULL;
        }
    }

}* root;

class Trie {
public:
    /** Initialize your data structure here. */
    Trie() { root = new TrieNode(); }

    /** Inserts a word into the trie. */
    void insert(string word) {
        int ln = word.size();
        TrieNode* cur = root;

        for (int i = 0; i < ln; i++) {
            int id = word[i] - 'a';
            if (cur->next[id] == NULL)
                cur->next[id] = new TrieNode();
            cur = cur->next[id];
        }
        cur->endmark = true;
    }

    /** Returns if the word is in the trie. */
    bool search(string word) {
        int ln = word.size();
        TrieNode* cur = root;
        for (int i = 0; i < ln; i++) {
            int id = word[i] - 'a';
            if (cur->next[id] == NULL)
                return false;
            cur = cur->next[id];
        }
        return cur->endmark;
    }

    /** Returns if there is any word in the trie that starts with the given
     * prefix. */
    bool startsWith(string prefix) {
        int ln = prefix.size();
        TrieNode* cur = root;
        for (int i = 0; i < ln; i++) {
            int id = prefix[i] - 'a';
            if (cur->next[id] == NULL)
                return false;
            cur = cur->next[id];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
