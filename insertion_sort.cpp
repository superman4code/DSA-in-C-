#include<bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &v,int n)
{
    for(int i=0;i<n;i++)
    {
        int j=i;
        while(j>0&&v[j]<v[j-1])
        {
            swap(v[j],v[j-1]);
            j--;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    insertion_sort(v,n);
    for(auto i:v)
    {
        cout<<i<<" ";
    }
}