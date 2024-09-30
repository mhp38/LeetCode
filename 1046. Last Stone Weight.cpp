class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;

        for(auto i : stones)pq.push(i);

        while(1)
        {
            if(pq.size()==0)return 0;
            if(pq.size()==1)return pq.top();

            int a = pq.top();
            pq.pop();

            int b = pq.top();
            pq.pop();

            if(a==b)continue;
            else pq.push(a-b);
        }
        return 0;
    }
};
