//returns length of longest subarray with sum==k

#include <bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(vector<int> a, long long k)
{

    int len = 0;
    int sum = 0;
    map<int, int> m;
    m[0] = 0;
    for (int i = 0; i < a.size(); i++)
    {
        sum += a[i];
        int key = sum - k;
        if (sum == k)
        {
            len = max(len, i + 1);
        }
        if (m.find(sum) == m.end())
        {
            m[sum] = i;
        }
        if (m.find(key) != m.end())
        {
            len = max(len, i - m[key]);
        }
    }
    return len;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int &i : v)
        cin >> i;
    int ans = longestSubarrayWithSumK(v, k);
    cout << ans;
}
