class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int ro = A.size();
        int cl = A[0].size();

        // creating a two dimensional array and initializing it into 0

        vector<vector<int>> res(cl, vector<int>(ro));

        for (int i = 0; i < ro; i++) {
            for (int j = 0; j < cl; j++) {
                res[j][i] = A[i][j];
            }
        }
        return res;
    }
};
