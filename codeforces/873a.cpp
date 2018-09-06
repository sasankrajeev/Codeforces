#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    ll a,b,c,d,e,f,g,h=0,i;
    cin>>a>>b>>c;
    vector < ll >x;
    for(i=0;i<a;i++){
        cin>>d;
        x.push_back(d);
    }
    for(i=0;i<a-b;i++){
        h=h+x[i];
    }
    cout<<h+b*c<<endl;
}


