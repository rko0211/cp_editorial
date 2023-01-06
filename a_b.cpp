#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    int a[2];
    int j=0;
    for(int i=0;i<s.size();i+=2)
    {
     a[j]= s[i]-'0';
     j++;
    }
    cout<<(a[0]+a[1])<<endl;
}


    return 0;
}