#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    long double a,b,c,d,e,f,g,h;
    cin>>a>>b>>c;
    d=b/a*100;
    e=c-d;
    if(e<=0){
        cout<<0<<endl;
    }else{
        cout<<ceil(e*a/100)<<endl;
    }
}


