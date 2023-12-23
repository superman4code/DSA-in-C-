#include<bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &v,int n)
{
    for(int i=1;i<n;i++)
    {
         int didswap=0;
        for(int j=0;j<n-i;j++)
        {
           
            if(v[j]>v[j+1])
            {
                swap(v[j],v[j+1]);
                didswap=1;
            }
        }
        if(didswap==0)
        {
            break;
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
    bubble_sort(v,n);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    
}