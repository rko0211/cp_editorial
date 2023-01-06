#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;  
while(t--)
{
    int k,n;
    cin>>k>>n;int ans[k];
  if(n==k)
  {
    for(int i=0;i<k;i++)
    cout<<i+1<<" ";
    continue;
  }
  int j=1;
  int diff=1;
  for(int i=1;i<=k;i++)
  {
  cout<<j<<" ";
  if(n-(j+diff)>=(k-(i+1)))
  {
    j =(j+diff);
    diff++;
  }
  else
  {
    j++;
  }
  }
  cout<<endl;


}

    return 0;
}