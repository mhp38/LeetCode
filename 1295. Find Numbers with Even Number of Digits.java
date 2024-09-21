class Solution {
    public int findNumbers(int[] nums) {
        int cnt = 0;
        for(int i=0;i<nums.length;i++){
            String st = Integer.toString(nums[i]);
            if(st.length() % 2 == 0)cnt++;
        }
        return cnt;
    }
}
