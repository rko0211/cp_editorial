#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
   unordered_set<int>st;
   for(int i=0;i<n;i++)
   st.insert(a[i]);
   int no_type = st.size();
   if(no_type==2)
   cout<<n/2+1<<endl;
   else cout<<n<<endl;

}

    return 0;
}