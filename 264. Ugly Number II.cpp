class Solution {
public:
    int nthUglyNumber(int n) {

        using ll = long long;
        ll x;
        priority_queue<ll, vector<ll>, greater<ll>> pq;
        pq.push(1);

        while (n--) {
            x = pq.top();
            pq.pop();

            while (!pq.empty() && x == pq.top())
                pq.pop();

            pq.push(x * 2);
            pq.push(x * 3);
            pq.push(x * 5);
        }

        return x;
    }
};
