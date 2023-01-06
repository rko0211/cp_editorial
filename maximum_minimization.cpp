#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n ;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int maxi,mini;
 maxi = a[0];
 mini = a[0];
 for(int i=1;i<n;i++)
 {
    maxi = maxi | a[i];
    mini = mini & a[i];

 }
  
cout<<(maxi-mini)<<endl;

  }

    return 0;
}