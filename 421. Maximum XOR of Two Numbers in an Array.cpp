class Trie {

public:
    int value;
    Trie* child[2];
    Trie() {
        for (int i = 0; i < 2; i++) {
            child[i] = NULL;
            this->value = 0;
        }
    }

    void insert(int num) {
        Trie* cur = this;

        for (int i = 31; i >= 0; i--) {
            bool bt = num & (1 << i); // check bit
            if (cur->child[bt] == NULL)
                cur->child[bt] = new Trie;
            cur = cur->child[bt];
        }

        cur->value = num;
    }

    int findXOR(int num) {
        Trie* cur = this;
        for (int i = 31; i >= 0; i--) {
            bool bt = num & (1 << i); // check bit
            if (cur->child[1 - bt])
                cur = cur->child[1 - bt];
            else if (cur->child[bt])
                cur = cur->child[bt];
        }

        return cur->value ^ num;
    }
};

class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int sz = nums.size();

        if (sz == 0 || sz == 1)
            return 0;

        Trie* root = new Trie();
        root->insert(nums[0]);

        int mx = -1e9;

        for (int i = 1; i < sz; i++) {
            mx = max(mx, root->findXOR(nums[i]));
            root->insert(nums[i]);
        }

        return mx;
    }
};
