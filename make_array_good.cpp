#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
 vector<pair<ll,ll>>v;
 vector<pair<ll,ll>>ans;
 for(ll i=0;i<n;i++)
 {
    v.push_back({a[i],(i+1)});
 }
 sort(v.begin(),v.end());

for(int i=1;i<v.size();i++)
{
 if(v[i].first%v[i-1].first!=0)
 {
    ll x = (((v[i].first)/v[i-1].first +1)*v[i-1].first) - v[i].first;
    ans.push_back({v[i].second ,x});
    v[i].first+=x;
 }
}
cout<<ans.size()<<endl;
int p = ans.size();
for(int i=0;i<p;i++)
{
    cout<<ans[i].first<<" "<<ans[i].second<<endl;
}

}

    return 0;
}