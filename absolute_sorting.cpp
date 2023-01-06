#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool isascendingsorted(ll a[], ll n)
{
    bool flag =true;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            flag =false;
            break;
        }
    }
    return flag;
}
int main()
{
int t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    ll a[n];

    for(int i=0;i<n;i++)
   {
     cin>>a[i];

   } 
      ll maxi= int(1e9);
    ll mini = 0;
  for(int i=0;i<n-1;i++)
  {
    ll x = a[i];
    ll y = a[i+1];
   ll smallx = (x+y)/2;
   ll largex = (x+y+1)/2;
   if(x>y) 
   {
    mini = max(mini,largex);
   } 
   if(x<y)
   {
    maxi = min(maxi,smallx);
   }
  }
if(mini<=maxi) cout<<mini<<endl;
else cout<<-1<<endl;

}

    return 0;
}