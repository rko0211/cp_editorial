#include<bits/stdc++.h>
using namespace std;
bool isprime(int x)
{
    if(x<=1)
    return false;
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0)
        return false;
    }
    return true;
}
int main()
{
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        if(isprime(a[i]))
        {
          v.push_back({(i+1),a[i]});
        }
    }


}

    return 0;
}


