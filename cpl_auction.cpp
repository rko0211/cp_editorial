#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n,p;
    cin>>n>>p;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
   ll sum1=0;
    for(int i=0;i<n;i++)
    {
        sum1+=a[i];
    }
   if(n==1)
   {
    cout<<0<<endl;
    return;
   }
   else if(n==2)
   {
    if(a[0]!=0 && a[1]!=0)
    {cout<<(((a[0]+2*p)+(a[1]+2*p))-(a[0]+a[1]))<<endl;return;}
    else if(a[0]==0 && a[1]!=0)
    {
        cout<<(((a[0]+2*p)+(a[1]+2*(p-1))-(a[0]+a[1])))<<endl;
        return;
    }
        else if(a[0]==0 && a[1]!=0)
    {
        cout<<(((a[0]+2*(p-1))+(a[1]+2*p)-(a[0]+a[1])))<<endl;
        return;
    }
    
   }
    ll ans[n]={0};
    ll sum=0;
    ans[0]+= a[0] +(2*1LL*p);
    ans[n-1]+= a[n-1]+(2*1LL*p);
  for(int i=1;i<=n-2;i++)
  {
    if((a[i-1]!=0 && a[i+1]!=0))
    {
        ans[i]+= (a[i] +(2*1LL*p)+(2*p));
    }
    else if( ( a[i-1]==0 && a[i+1]==0))
    {
        ans[i]+=(a[i]+(2*1LL*p)+(2*(p-2)));
    }
    else if( ((a[i-1]==0 && a[i+1]!=0)||(a[i-1]!=0 && a[i+1]==0)))
    {
        ans[i]+= (a[i]+(2*1LL*p)+(2*(p-1)));
    }
  }

   for(int i=0;i<n;i++)
    {
        sum+=ans[i];
    }

  cout<<(sum-sum1)<<endl;
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
