#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

int test;
    cin>>test;
    while(test--){
        long long int num ,mm;
    cin>>num>>mm;
  long long  bsb[num];
  priority_queue <long long int, vector<long long int>, greater<long long int>> ppqq;
  for(int i=0;i<num;i++){
  cin>>bsb[i];
  }
   long long int b[mm];
  for(int i=0;i<mm;i++){
  cin>>b[i];
  }
   for(int i=0;i<num;i++){
  ppqq.push(bsb[i]);
  }
  int k = 0 ; 
while (k < mm)
{
   ppqq.pop();
  ppqq.push(b[k]); 
  k++ ; 
}


   long long int sum = 0;
  while(!ppqq.empty()) {      
  sum = sum + ppqq.top();
  ppqq.pop();
    }
    
   cout<<sum<<endl;
    }
    return 0;
}