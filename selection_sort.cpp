#include<bits/stdc++.h>
using namespace std;
#define datatype long long int 

void selection_sort(vector<datatype> &v,int n)
{
    
    for(int i=0;i<n;i++)
    {
         datatype min =i;
        for(int j=i;j<n;j++)
        {
           
            if(v[j]<v[min])
            {
               min=j;
            }
        }
        swap(v[min],v[i]);
        

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
    vector<datatype> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    selection_sort(v,n);
    for(auto it:v)
    {
        cout<<it<<" ";
    }
}