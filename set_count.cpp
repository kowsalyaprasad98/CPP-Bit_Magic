#include<bits/stdc++.h>
using namespace std;
int main()
{
   int k;
   cin>>k;//10
   int count=0;
   //logic to count set bits
   while(k!=1)
   {
   	if(k&1==1)// 1010 & 0001 --->0101 & 0001 --->
    {
   	count++;
    }
	k=k>>1;
   }
   cout<<count;
   
	
}
