#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    // T.C --> O(n)
    // S.C --> O(n)
    int n;
    cin>>n;
    long long int a[n]; long long int ds[n];
    for(int i=0;i<n;i++)
  {  cin>>a[i];
     
     ds[i]=a[i];

   }

   sort(ds,ds+n);
   long long  max1 = ds[n-1];
   long long  max2 = ds[n-2];
   for(int i =0;i<n;i++)
   {
    if(a[i]==max1)
    {
        a[i]=(a[i]-max2);
    }
    else
    {
        a[i]=(a[i]-max1);
    }
   }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

    return 0;
}