class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        queue<int>qo,qe;
        vector <int> fnl;
        int x;

        for(int i=0;i<A.size();i++){
            if(A[i]%2==0)qe.push(A[i]);
            else qo.push(A[i]);
        }

        for(int i=0;i<A.size();i++)
        {
            if(i%2==0 && !qe.empty()){
                x=qe.front();
                qe.pop();
                fnl.push_back(x);
            }
            else if(i%2==1 && !qo.empty()){
                  x=qo.front();
                qo.pop();
                fnl.push_back(x);
            }
        }
        return fnl;
    }
};
