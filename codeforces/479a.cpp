#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,i,c,d,j;
    vector <int>b;
    cin>>a;
    cin>>c;
    cin>>d;
    b.push_back(a+c+d);
    b.push_back(a*c*d);
    b.push_back(a+c*d);
    b.push_back((a+c)*d);
    b.push_back(a*(c+d));
    b.push_back(a*c+d);
    sort(b.begin(),b.end());
    cout<<b[b.size()-1];
return 0;
}