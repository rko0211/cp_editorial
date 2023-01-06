#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
void solve()
{
    ll n,m;
cin>>n>>m;
ll ans =n;
ll k =1;
while(n%10==0)          // extract zero from n 
{
    n=n/10;
}
while(n%5==0)
{
    n/=5;
    if(k*2<=m)
    {
        k=k*2;
    }
    else{
        break;
    }
}
while(n%2==0)
{
    n/=2;
    if(k*5<=m)
    {
        k*=5;
    }
    else{
        break;
    }
}
while(k*10<=m)
{
    k=k*10;
}
// multiple of k should be as large as possible but less than m;
k = (m/k)*k;
cout<<ans*k<<endl;

}
int main()
{
int t;
cin>>t;
while(t--)
{
solve();
}

    return 0;
}