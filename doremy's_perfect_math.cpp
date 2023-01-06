#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int gcd(int a, int b)
{
    if(a%b==0)
    return b;
    return gcd(b,a%b);
}
int main()
{
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
  ll a[n];
   for(int i=0;i<n;i++)
   {
  cin>>a[i];
   }

int tem=a[0];
for(int i=1;i<n;i++)
{
    tem= gcd(a[i],tem);
}
cout<<a[n-1]/tem<<endl;

// Smallest difference that we can produce between many numbers is that the GCD among them;
}

    return 0;
}