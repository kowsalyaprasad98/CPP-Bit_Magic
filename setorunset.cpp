#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s,pos;
	cin>>s;
	// logic to check the position bit is set or not
	cin>>pos;
	if(s&((pos-1)<<1)) // if((s&(1<<(pos-1)))>0)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
	
}

