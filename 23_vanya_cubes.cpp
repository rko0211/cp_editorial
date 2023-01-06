#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int level=0;
int cubecount=0;
int i=0;
while(cubecount<=n)
{
cubecount+=(i*(i+1))/2;
i++;

}
cout<<i-2<<endl;
    return 0;
}