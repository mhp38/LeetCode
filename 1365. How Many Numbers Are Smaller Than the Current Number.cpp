class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

        vector < int > ar = nums;
        sort(ar.begin(),ar.end());

        for(int i=0;i<ar.size();i++){
            nums[i]=lower_bound(ar.begin(),ar.end(),nums[i])-ar.begin();
        }
        return nums;

    }
};
