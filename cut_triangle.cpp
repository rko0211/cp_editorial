#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
int t;
cin>>t;
while(t--)
{
    ll a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    set<int>x;
    set<int>y;
  
        x.insert(a);
        x.insert(c);
        x.insert(e);
        y.insert(b);
        y.insert(d);
        y.insert(f);
  
if(x.size()==3 ||y.size()==3)
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}
}

    return 0;
}