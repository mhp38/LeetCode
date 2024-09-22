class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int sz = piles.size();
        int move = sz/3;
        sort(piles.begin(), piles.end());

        int ans = 0;
        for(int i=sz-2;i>=1;i=i-2){
            if(move == 0)break;
            ans+=piles[i];
            move--;
        }
        return ans;
    }
};
