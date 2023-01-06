#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    int x=1;
    while(x<=t)
    {
        long int l,n;
        cin>>l>>n;
long int sum=0;
vector<pair<long int,char>>v;

for(int i=0;i<n;i++)
{
    long int f; cin>>f;
    char c ;  cin>>c;
 v.push_back({f,c});

}

vector<int>ans(n);
for(int i=0;i<v.size();i++)
{
  ans.push_back(v[i].first/l);
if(v[i].second!=v[i+1].second)
{
    v[i+1].first -=v[i].first%l;
}
else
{
     v[i+1].first +=v[i].first%l;
}

}
for(auto&it:ans)
{
    sum+=it;
}

cout<<"Case #"<<x<<":"<<" "<<sum<<endl;


x++;
    }



    return 0;
}