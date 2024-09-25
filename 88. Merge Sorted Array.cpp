class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int index =0;
        int ln = m+n;
        for(int i=m;i<ln;i++){
            nums1[i]=nums2[index++];

        }
        sort(nums1.begin(),nums1.end());

    }
};
