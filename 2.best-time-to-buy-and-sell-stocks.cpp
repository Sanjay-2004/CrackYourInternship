#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int curProf = 0;
        int maxProf = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            curProf += prices[i] - prices[i - 1];
            maxProf = max(maxProf, curProf);
            curProf = max(0, curProf);
        }
        return maxProf;
    }
};
// @lc code=end
