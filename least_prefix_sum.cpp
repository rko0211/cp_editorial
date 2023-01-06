#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
void solve()
{
    int n,m;
    cin>>n>>m;
   ll a[n];
   for(int i=0;i<n;i++)
   cin>>a[i];
 if(n==m)
 {
    ll maxele=INT_MIN;
    for(int i=0;i<n;i++)
    {
        maxele = max(maxele,a[i]);
    }
    int cnt=0;
    if(maxele>0)
    {
        
    }
 }
}
int main()
{
int t;
cin>>t;
while(t--)
solve();

    return 0;
}