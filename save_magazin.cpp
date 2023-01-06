#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int ans=0;
    int minv_val;
    for(int i=n-1;i>=0;)
    {
        if(s[i]=='1')
        {
           minv_val = a[i];
           while(i>=0)
           { 
              minv_val=min(minv_val,a[i]);
            if(s[i]=='1')
            {
             ans+=a[i];
            i--;
           }
           else
           {
           ans+=a[i];
           i--;
           ans-=minv_val;
           break;
           }
           }
        }
        else{
            i--;
        }
    }
    cout<<ans<<endl;
 }

    return 0;
}