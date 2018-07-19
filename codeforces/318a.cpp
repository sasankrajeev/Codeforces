#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long m,n,a;
    cin>>n;
    cin>>m;
    a=(n+1)/2;
    if(m>a){
        cout<<2*(m-a);
    }else{
        cout<<2*m-1;
    }
    return 0;
}