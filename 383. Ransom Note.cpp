class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        int lnm = magazine.size();
        int lnr = ransomNote.size();

        sort(ransomNote.begin(), ransomNote.end());
        sort(magazine.begin(), magazine.end());

        int j = 0;

        for (int i = 0; i < lnm; i++) {
            if (ransomNote[j] == magazine[i])
                j++;
        }
        return j == lnr;
    }
};
