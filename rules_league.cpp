#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,x,y;
    cin>>n>>x>>y;
     if((x!=0 && y!=0)||(x==0 && y==0))
     {
        cout<<-1<<endl;
        return ;
     }
    int a = max(x,y);
    if((n-1)%a!=0)
    {
        cout<<-1<<endl;
        return;
    }
    else
    {
        int p = (n-1); int i=1;
       while(p)
       {
       
        for(int j=1;j<=a;j++)
        {
            cout<<i<<" ";
        }
        if(i==1)
        {
            i = i+(a+1);
        }
        else
        i+=a;

      p-=a;
       }
       cout<<endl;

    }

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