#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s,pos,res;
	cin>>s;
	cin>>pos;
	res=s|((pos-1)<<1);
	cout<<res;
	
}
