#include<bits/stdc++.h>
#include<string.h>
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
   string str=s;
   reverse(s.begin(),s.end());
   vector<vector<int>>v(n+1, vector<int>(n+1,0));
   for(int i=1;i<=n;i++)
   {
     for(int j=1;j<=n;j++)
     {
        if(str[i-1]==s[j-1]) v[i][j] =1+v[i-1][j-1];
        else v[i][j] = max(v[i-1][j], v[i][j-1]);
     }
   }
   cout<<v[n][n]/2<<endl;
}

    return 0;
}