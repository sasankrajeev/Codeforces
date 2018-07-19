#include <bits/stdc++.h>

using namespace std;

int main() {
	float a,i,b,c=0;
	vector <float>d;
	cin>>a;
	for(i=0;i<a;i++){
		cin>>b;
		d.push_back(b);
		c=c+d[i];
	}
	cout<<fixed<<setprecision(6)<<c/a;
	return 0;
}