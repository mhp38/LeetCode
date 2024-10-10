class Solution {
public:
    string frequencySort(string s) {
        map<char, int> mp;
        for (int i = 0; i < s.size(); i++)
            mp[s[i]]++;

        priority_queue<pair<int, char>> pq;

        for (auto v : mp) {
            pq.push(make_pair(v.second, v.first));
        }

        string ans = "";

        while (!pq.empty()) {
            pair<int, int> p;
            p = pq.top();
            pq.pop();

            while (p.first--)
                ans += p.second;
        }
        return ans;
    }
};
