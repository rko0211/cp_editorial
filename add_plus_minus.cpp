#include<bits/stdc++.h>
using namespace std;
#define ll long long int
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
int sum =0;
string ans ="";
if(s[0]=='1') sum+=1;
for(int i=1;i<n;i++)
{
    if(s[i]=='0')
    ans+="+";
    else
    {
        // s[i]=='1'
        if(sum==0)
        {
            ans+="+";
            sum++;
        }
        else{
            // sum==1
            ans+="-";
            sum--;
        }
    }
}
cout<<ans<<endl;

}


    return 0;
}