class Solution {
public:

    bool ispal(string s)
    {
        int i=0,j=s.size()-1;
        while(i<=j){
            if(s[i++] != s[j--])return false;
        }
        return true;
    }

    int countSubstrings(string s) {
        int ln=s.size(),cnt=0;

        for(int i=0;i<ln;i++)
        {
            for(int j=i;j<ln;j++)
            {
                string chk = s.substr(i,j-i+1);
                if(ispal(chk))cnt++;
            }
        }
        return cnt;
    }
};
