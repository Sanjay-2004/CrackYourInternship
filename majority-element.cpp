// LeetCode - 169. Majority Element
// https://leetcode.com/problems/majority-element/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int c, cnt = 0;
        for (int i : nums)
        {
            if (cnt == 0)
                c = i, cnt = 1;
            else if (i == c)
                cnt++;
            else
                cnt--;
        }
        return c;
    }
};