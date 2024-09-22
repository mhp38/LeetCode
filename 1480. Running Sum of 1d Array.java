class Solution {
    public int[] runningSum(int[] nums) {
        int res = 0;
        int[] sum = new int[nums.length];
        for(int i=0;i<nums.length;i++){
            sum[i]=res+nums[i];
            res=sum[i];
        }
        return sum;
    }
}
