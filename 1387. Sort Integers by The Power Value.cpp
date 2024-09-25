class Solution {
public:

    int getSteps(int number){

        int steps = 0;

        while(number != 1){
            if(number % 2 == 0){
                number/=2;
            }
            else {
                number = (3*number + 1);
            }

            steps++;
        }
        return steps;
    }

    int getKth(int lo, int hi, int k) {
        vector<pair<int,int>>vt;

        for(int i=lo;i<=hi;i++){

            int steps = getSteps(i);
            vt.push_back(make_pair(steps,i));
        }

    sort(vt.begin(), vt.end());
    return vt[k-1].second;
    }
};
