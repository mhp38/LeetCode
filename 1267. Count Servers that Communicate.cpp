/*We can count the number of servers in each row and each column, then traverse each server. If the number of servers in the current server's row or column exceeds 1 , it means the current server meets the condition, and we increment the result by 1 .

After the traversal, we return the result.

The time complexity is O ( m × n ) , and the space complexity is O ( m + n ) . Where m and n are the number of rows and columns in the matrix, respectively.
*/

class Solution {
    public int countServers(int[][] grid) {
        int ro = grid.length;
        int cl = grid[0].length;

        int[] roc = new int[ro];
        int[] clc = new int[cl];

        for (int i = 0; i < ro; i++) {
            for (int j = 0; j < cl; j++) {
                if (grid[i][j] == 1) {
                    roc[i]++;
                    clc[j]++;
                }
            }
        }

        int res = 0;

        for (int i = 0; i < ro; i++) {
            for (int j = 0; j < cl; j++) {
                if (grid[i][j] == 1) {
                    if (roc[i] > 1 || clc[j] > 1)
                        res++;
                }
            }
        }
        return res;
    }
}
