class Solution {
    public int maximumWealth(int[][] accounts) {
        int ln = accounts.length;
        int sum = 0;
        int mx = 0;
        for(int i=0;i<ln;i++){
            sum=0;
            for(int j=0;j<accounts[i].length;j++){
                sum+=accounts[i][j];
                mx = Math.max(mx,sum);
            }
        }

        return mx;
    }
}
