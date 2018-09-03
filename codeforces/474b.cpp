#include <bits/stdc++.h>
using namespace std;


int main(int argc, char **argv)
{
    long long int n,i,j,k,a,b,c=0,d=1,e,l;
    vector < long long int > x;
    vector < long long int> y;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>b;
        x.push_back(b);
    }
    cin>>a;
    for(i=0;i<a;i++){
        cin>>b;
        y.push_back(b);
    }
    for(i=1;i<n;i++){
        x[i]=x[i]+x[i-1];
    }
    for(i=0;i<a;i++){
         cout<<lower_bound(x.begin(), x.end(), y[i]) - x.begin() + 1 <<endl;
    }
    return 0;
}
