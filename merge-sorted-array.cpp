// LeetCode - 88. Merge Sorted Array
// https://leetcode.com/problems/merge-sorted-array/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int l = m - 1, r = n - 1, idx = m + n - 1;
        while (l >= 0 && r >= 0)
        {
            if (nums1[l] > nums2[r])
            {
                nums1[idx--] = nums1[l--];
            }
            else
            {
                nums1[idx--] = nums2[r--];
            }
        }
        while (r >= 0)
        {
            nums1[idx--] = nums2[r--];
        }
    }
};