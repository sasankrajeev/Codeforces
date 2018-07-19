#include<bits/stdc++.h>
using namespace std;
int main()
{
	int c=0,d=0;
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>='A' && s[i]<='Z' )
			c=c+1;
		else
			d=d+1;
	}
	for(int i=0;i<s.size();i++)
	{
		if(c>d)
			s[i]=toupper(s[i]);
		else
			s[i]=tolower(s[i]);
	}
	cout<<s<<endl;
	return 0;
	
}