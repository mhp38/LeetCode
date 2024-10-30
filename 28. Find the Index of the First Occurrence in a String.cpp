class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans = -1;
        int hayln = haystack.size();
        int nedln = needle.size();
        for (int i = 0; i <= hayln - nedln; i++) {
            if (haystack.substr(i, nedln) == needle) {
                ans = i;
                break;
            }
        }
        return ans;
    }
};
