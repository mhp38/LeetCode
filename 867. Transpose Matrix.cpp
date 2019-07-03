class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int ro=A.size();
        int cl=A[0].size();

        //creating a tow dimensional array and initializing it into 0

        vector<vector<int>>res(cl,vector<int>(ro,0));

        for(int j=0;j<cl;j++){
            for(int i=0;i<ro;i++){
                res[j][i]=A[i][j];
            }
        }
        return res;
    }
};
