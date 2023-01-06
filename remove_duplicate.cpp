#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
unordered_set<int>s;
vector<int>v;
for(int i=n-1;i>=0;i--)
{
if(s.find(a[i])==s.end())
{
    v.push_back(a[i]);
    s.insert(a[i]);
}
}
reverse(v.begin(),v.end());
cout<<s.size()<<endl;
for(auto &it:v)
{
    cout<<it<<" ";
}

    return 0;
}