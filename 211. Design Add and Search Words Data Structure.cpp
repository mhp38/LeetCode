



typedef struct dict_s {
    int is_leaf;
    struct dict_s *child[26];
} WordDictionary;

/** Initialize your data structure here. */
WordDictionary* wordDictionaryCreate() {
    WordDictionary *ob;
    ob  = calloc(1, sizeof(WordDictionary));
    return ob;
}

/** Adds a word into the data structure. */
void wordDictionaryAddWord(WordDictionary* ob, char* word) {

    int in;
    if (!word || !*word) return;

    while (*word) {
        in = *word - 'a';
        if (!ob->child[in]) {
            ob->child[in] = calloc(1, sizeof(WordDictionary));
        }
        ob = ob->child[in];
        word ++;
    }
    ob->is_leaf = 1;
}

/** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */

bool wordDictionarySearch(WordDictionary* ob, char* word) {

    int i;
    while (ob && *word) {
        if (*word == '.') {
            for (i = 0; i < 26; i ++) {
                if (wordDictionarySearch(ob->child[i], word + 1)) {
                    return true;
                }
            }
            return false;
        } else {
            i = *word - 'a';
            ob = ob->child[i];
            word ++;
        }
    }

    return (ob && ob->is_leaf) ? true : false;
}

void wordDictionaryFree(WordDictionary* ob) {

    int i;
    for (i = 0; i < 26; i ++) {
        if (ob->child[i]) wordDictionaryFree(ob->child[i]);
    }

    free(ob);
}
/**
 * Your WordDictionary struct will be instantiated and called as such:
 * WordDictionary* obj = wordDictionaryCreate();
 * wordDictionaryAddWord(obj, word);

 * bool param_2 = wordDictionarySearch(obj, word);

 * wordDictionaryFree(obj);
*/
