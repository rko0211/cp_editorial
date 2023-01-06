#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
int t;
cin>>t;
while(t--)
{
    ll x1,p1,x2,p2;
    cin>>x1>>p1;
    cin>>x2>>p2;
    if(x1==x2 && p1==p2)
    {
        cout<<"="<<endl;
    }
    else{

while(x1<=1000000 && p1>0)
{
    x1*=10;
    p1--;
}
while(x2<=1000000 && p2>0)
{
    x2*=10;
    p2--;
}
if(p1==p2)
{
    if(x1>x2)
    {
        cout<<">"<<endl;
    }
    if(x1<x2)
    cout<<"<"<<endl;
    if(x1==x2)
    cout<<"="<<endl;
    }
if(p1>p2)
cout<<">"<<endl;
else if(p1<p2)
cout<<"<"<<endl;

    }

}

    return 0;
}