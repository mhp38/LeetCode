/*
Solution 1: Bitwise Operation

The XOR operation has the following properties:

    Any number XOR 0 is still the original number, i.e., x ⊕ 0 = x ;
    Any number XOR itself is 0, i.e., x ⊕ x = 0 ;

Performing XOR operation on all elements in the array will result in the number
that only appears once.

The time complexity is O ( n ) , where n is the length of the array. The space
complexity is O ( 1 )

*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            ans ^= nums[i];
        }
        return ans;
    }
};
