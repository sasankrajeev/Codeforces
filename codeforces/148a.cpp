#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,n,f=0;
	cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>n;
	for(int i=1;i<=n;i++){
		if(i%a==0||i%b==0||i%c==0||i%d==0)
		f++;
    }
	cout<<f;
	return 0;
}