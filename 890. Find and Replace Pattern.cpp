class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;

        for(const auto& word : words)
        {
            if (match(word,pattern)){
                ans.emplace_back(word);
            }
        }
        return ans;
    }


    private:
      bool match(const string& word,const string& pattern)
      {
          map<char,char>lookup;
          set<char>st;

          for(int i=0;i<word.size();i++){

          const auto& c=word[i];
          const auto& p=pattern[i];

          if(!lookup.count(c))
          {
              if(st.count(p))return false;

              st.emplace(p);
              lookup[c]=p;
          }
              if(lookup[c] != p)return false;
      }
          return true;

     }
};
