#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    int l;
    cin>>n>>l;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
       double s,f=0;
    for(int i=0;i<n-1;i++)
    {
        s=a[i+1]-a[i];
        if(s>f)
        {
            f=s;
        }
    }
    double g=double(f/2);
    double d,k;
    d=a[0];
    k=l-a[n-1];
    if(d<k)
    {
        d=k;
    }
    
    if(d>g)
    {
        cout<<fixed<<setprecision(9)<<d;
    }
    else
    {
        cout<<fixed<<setprecision(9)<<g;
    }
    return 0;
}