#include<bits/stdc++.h>
using namespace std;
#define ll long 
void solve()
{
    int n;
    cin>>n;
    ll a[n];
   for(int i=0;i<n;i++)
   cin>>a[i];
   ll sum=0;
   for(int i=0;i<n;i++)
   sum+=a[i];
   sort(a,a+n);
   ll dif = (a[n-1]-a[0]);
   for(int i=0;i<n;i++)
   {
    a[i]=dif;
   }
   ll ans=0;
    for(int i=0;i<n;i++)
   ans+=a[i];
cout<<max(ans,sum)<<endl;
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}