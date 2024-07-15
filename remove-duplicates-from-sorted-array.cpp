// LeetCode - 26. Remove Duplicates from Sorted Array
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int cnt = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            while (i < nums.size() && nums[i] == nums[i - 1])
                i++;
            if (i >= nums.size())
                break;
            nums[cnt++] = nums[i];
        }
        return cnt;
    }
};
