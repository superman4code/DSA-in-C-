#include<bits/stdc++.h>
using namespace std;

//binary search to give index oof left most occurence

int bs(int ar[],int l,int r,int item)
{
    int m;
    int index;
    m=floor((l+r)/2);
    if(ar[m]==item)
    {
        index= m;
    }
    else if(ar[m]>item)
    {
        index= bs(ar,l,m,item);
    }
    else
    {
        index= bs(ar,m,r-1,item);
    }
    if(l==r)
    {    
        return index;
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
    int len;
    cin>>len;

    int *ar = new int[len];

    for(int i=0;i<len;i++)
    {
        cin>>ar[i];
    }
    
    int item;
    cin>>item;
    int index=bs(ar,0,len-1,item);
    cout<<index;
    

}