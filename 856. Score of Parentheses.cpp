class Solution {
public:
    int scoreOfParentheses(string S) {
        int ans=0,brk=0;

        int sz=S.size();

        for(int i=0;i<sz;i++)
        {
            if(S[i]=='(')brk++;
            else brk--;

            if(S[i]=='(' && S[i+1]==')')ans+=pow(2,brk-1);
        }
        return ans;
    }
};
