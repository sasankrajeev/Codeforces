#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int c,d,i;
    string a,b;
	cin>>a;
    cin>>b;
    for(i=0;i<a.size();i++){
        cout<<(a[i] != b[i]);
    }
    return 0;
}