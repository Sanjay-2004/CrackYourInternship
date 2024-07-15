// GfG - Chocolate Distribution Problem
// https://www.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long findMinDiff(vector<long long> a, long long n, long long m)
    {
        // code
        sort(a.begin(), a.end());
        long long ans = LLONG_MAX;
        for (int i = m - 1; i < a.size(); i++)
        {
            ans = min(ans, a[i] - a[i - (m - 1)]);
        }
        return ans;
    }
};