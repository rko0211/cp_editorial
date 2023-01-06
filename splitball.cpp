#include<iostream>
#include<queue>
using namespace std;
// Function to push element in last by popping from front until size becomes 0
void frontelement(queue<int>& q, int qsize)
{
   // Base condition
   if (qsize <= 0)
       return;

   // pop front element and push
   // this last in a queue
   q.push(q.front());
   q.pop();

   // Recursive call for pushing element
   frontelement(q, qsize - 1);
}
void insertelement(queue<int>&q, int val, int qsize)
{
   if(qsize==0 || q.empty())
   {
       q.push(val);
       return;
   }
     // If current element is greater thant he element at the front
   
   else if (val >= q.front()) {

       // Call stack with front of queue
       q.push(val);

       // Recursive call for inserting a front element of the queue to the last
       
       frontelement(q, qsize);
   }
   else {

       // Push front element into last in a queue
        
       q.push(q.front());
       q.pop();

       // Recursive call for pushing element in a queue
       
       insertelement(q, val, qsize - 1);
   }

}
void sortqueue(queue<int>& q)
{
   if(q.empty())
   return ;

int item =q.front();
q.pop();
sortqueue(q);
insertelement(q,item,q.size());
}
int main()
{
queue<int>q;
q.push(3);
q.push(4);
q.push(2);
q.push(8);
q.push(1);
q.push(7);
// initially queue is 3 4 2 8 1 7
sortqueue(q);

q.push(-1);  // input from user

sortqueue(q);          //Sort function call again
// Now queue becomes 8 7 4 3 2 1 -1

while(!q.empty())
{
   cout<<q.front()<<" ";
   q.pop();
}
cout<<endl;

   return 0;
}