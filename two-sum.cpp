// LeetCode - 1. Two Sum
// https://leetcode.com/problems/two-sum/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ans;
        unordered_map<int, int> check;
        for (int i = 0; i < nums.size(); i++)
        {
            if (check.find(target - nums[i]) != check.end())
            {
                ans.push_back(i);
                ans.push_back(check[target - nums[i]]);
                return ans;
            }
            check[nums[i]] = i;
        }
        return ans;
    }
};