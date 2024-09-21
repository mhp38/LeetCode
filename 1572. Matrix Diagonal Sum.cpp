class Solution {
    public int diagonalSum(int[][] mat) {
        int ln = mat.length;
        int sum = 0;
        for(int i=0;i<ln;i++){
            sum+=mat[i][i];
            sum+=mat[i][ln-i-1];
        }

        if(ln%2==1)sum-=mat[ln/2][ln/2];
        return sum;
    }
}