// LeetCode - 283. Move Zeroes
// https://leetcode.com/problems/move-zeroes/description/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int idx = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i])
            {
                swap(nums[i], nums[idx++]);
            }
        }
    }
};
// @lc code=end
