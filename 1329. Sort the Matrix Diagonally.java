class Solution {
    public int[][] diagonalSort(int[][] mat) {

        // we can see the top right and bottom left elements remain always same. Other elements will change

        int row = mat.length, col = mat[0].length;

        for(int k=0;k<(Math.min(row,col));k++){
            for(int i=0;i<row-1;i++){
                for(int j=0;j<col-1;j++){
                    if(mat[i][j] > mat[i+1][j+1]){
                        int temp = mat[i][j];
                        mat[i][j] = mat[i+1][j+1];
                        mat[i+1][j+1] = temp;
                    }
                }
            }
        }
        return mat;
    }
}
