class Solution {
    public int sumOddLengthSubarrays(int[] arr) {
        int ln = arr.length;
        int sum,ans=0;

        for(int i=0;i<ln;i++){
            sum = 0;
            for(int j=i;j<ln;j++){
                sum+=arr[j];
                if((j-i+1) %2 == 1) ans += sum;
            }
        }
        return ans;
    }
}
