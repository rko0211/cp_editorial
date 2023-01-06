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
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    int ans;


     int odd_count=0;
     int even_count=0;
     vector<int>odd,even;
     for(int i=0;i<n;i++)
     {
        if(a[i]%2)
        {
            odd_count++;
        odd.push_back(a[i]);
        }
        else if(a[i]%2==0)
        {
            even_count++;
        even.push_back(a[i]);
        }

     }
     if(odd_count==0 || (even_count==0 && n%2==0))
     {
        ans =0;
     }
     else
     {
       
     }

    
    cout<<ans<<endl;
}

    return 0;
}