#include<bits/stdc++.h>
using namespace std;
int main()
{
   int k;
   cin>>k;
   int count=0;
   while(k!=1)
   {
   	if(k&1==1)
    {
   	count++;
	}
	k=k>>1;
   }
   cout<<count;
   
	
}
