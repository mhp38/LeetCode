class Solution {
public:
    vector<bool> camelMatch(vector<string>& qs, string pt) {
        vector<bool> res;

        for (int i = 0; i < qs.size(); i++) {
            // string qs[i];

            int j, p;

            for (j = 0, p = 0; j < qs[i].size(); j++) {
                if (p < pt.size() && qs[i][j] == pt[p])
                    ++p;
                else if (!islower(qs[i][j]))
                    break;
            }
            res.push_back(j == qs[i].size() && p == pt.size());
        }

        return res;
    }
};
