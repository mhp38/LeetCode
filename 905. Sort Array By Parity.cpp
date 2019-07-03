class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int>ev;
        vector<int>od;
        vector<int>final;

        for(int i=0;i<A.size();i++)
        {
            if(A[i] % 2 == 0)ev.push_back(A[i]);
            else od.push_back(A[i]);
        }
        for(int i=0;i<ev.size();i++)final.push_back(ev[i]);
        for(int i=0;i<od.size();i++)final.push_back(od[i]);
        return final;
    }
};
