#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int a[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }
    int maxval =INT_MIN;
    int minval = INT_MAX;
        for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
          maxval = max(a[i][j],maxval);
          minval = min(a[i][j], minval);
        }
    }

    if((maxval == a[0][0] && minval == a[1][1]) || (maxval==a[1][1] && minval==a[0][0]))
    {
        cout<<"YES"<<endl;
    }
    else if((maxval == a[0][1] && minval== a[1][0]) || (maxval == a[1][0] && minval == a[0][1]))
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
}

    return 0;
}