#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
int n,x;
cin>>n>>x;
if(n%x!=0 || x>n)
{
    cout<<-1<<endl;
}

else
{
vector<int>ans(n+1);
iota(ans.begin(),ans.end(),0);
ans[1]=x;
ans[n]=1;
while(x<n)
{
    for(int i=x*2; i<=n;i+=x)
    {
        if(n%i==0)
        {
           ans[x]=i;
           x=i;
           break;
        }
    }
}
for(int i=1;i<=n;i++)
{
    cout<<ans[i]<<" ";
}
}
cout<<endl;
    }

    return 0;
}