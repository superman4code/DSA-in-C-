#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void shift(vector<int> &v, int i)
{
    int n = v.size();
    int t = v[i - 1];
    for (int j = i; j < n; j++)
    {
        v[j - 1] = v[j];
    }
    v[n - 1] = t;
}
void dup(vector<int> &v)
{
    int n = v.size();
    for (int i = 1; i < n; i++)
    {
        if (v[i] == v[i - 1])
        {
            shift(v, i);
            n -= 1;
            i -= 1;
        }
    }
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
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    // int i;
    // cin >> i;
    // shift(v, i);
    dup(v);
    for (auto i : v)
        cout << i << " ";
}