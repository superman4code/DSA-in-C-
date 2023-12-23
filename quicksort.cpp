#include <iostream>
#include <random>
using namespace std;
int partition(vector<int> &v, int l, int r)
{
    int pivot = v[l];
    int i = l, j = r;
    while (i < j)
    {
        if (v[i] < pivot)
            i++;
        if (v[j] > pivot)
            j--;
        if (v[j] < pivot && pivot <= v[i])
        {
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }
    return j;
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
    int low = 0, high = n - 1;
    for (int &i : v)
        cin >> i;
    int pivot = partition(v, low, high);
    cout << pivot << endl;
    for (int i : v)
        cout << i << endl;
}