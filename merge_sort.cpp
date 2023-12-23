#include <bits/stdc++.h>
using namespace std;
void ms(vector<int> &ar, int low, int mid, int high)
{
    // cout<<"int ms"<<endl;
    int temp[high - low + 1];
    int l = 0;
    int i = low, j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (ar[i] < ar[j])
        {
            temp[l] = ar[i];
            l++;
            i++;
        }
        else
        {
            temp[l] = ar[j];
            j++;
            l++;
        }
    }
    if (i == mid + 1)
    {
        while (j < high + 1)
        {
            temp[l] = ar[j];
            l++;
            j++;
        }
    }
    else if (j == high + 1)
    {
        while (i < mid + 1)
        {
            temp[l] = ar[i];
            i++;
            l++;
        }
    }
    int k = 0;
    for (int i = low; i <= high; i++)
    {
        ar[i] = temp[k];
        k++;
    }
}

void merge_sort(vector<int> &ar, int low, int high)
{
    // cout<<"in sort"<<endl;
    if (low >= high)
    {

        return;
    }
    int mid = (low + high) / 2;
    merge_sort(ar, low, mid);
    merge_sort(ar, mid + 1, high);
    ms(ar, low, mid, high);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    merge_sort(ar, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
}