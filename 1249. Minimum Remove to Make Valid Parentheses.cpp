class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string a="";
        //traverse from left to right
        int balance = 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('){
                balance++;
                a+=s[i];//this might take extra '(' so we have to traverse from right also
            }
            else if(s[i]==')')
            {
                if(balance>0)
                {
                    balance--;
                    a+=s[i];
                }
            }
            else a+=s[i];
        }

        //traverse from right to take

        balance = 0;
        string b="";

        for(int i=a.size()-1;i>=0;i--)
        {
            if(a[i]==')'){
                balance++;
                b+=a[i];
            }
            else if(a[i]=='(')
            {
                if(balance>0){
                    balance--;
                    b+=a[i];
                }
            }
            else b+=a[i];
        }
        reverse(b.begin(),b.end());
        return b;
    }
};
