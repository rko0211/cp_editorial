#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    string s1 =s;
reverse(s.begin(),s.end());
string palindrom="";
palindrom+=(s1+s);
cout<<palindrom<<endl;


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