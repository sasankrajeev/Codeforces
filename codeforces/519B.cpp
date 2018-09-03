#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv)
{
    long long int n,i,j,k,a,b,c,d,e,l;
    cin>>n;
    long long int x[n];
    long long int y[n-1];
    long long int z[n-2];
    long long int r[n-1];
    for(i=0;i<n;i++){
        cin>>x[i];
    }
    for(i=0;i<n-1;i++){
        cin>>y[i];
    }
    for(i=0;i<n-2;i++){
        cin>>z[i];
    }
    sort(x,x+n);
    sort(y,y+n-1);
    sort(z,z+n-2);
    for(i=0;i<n-1;i++){
        r[i]=y[i];
    }
    for(i=0;i<n;i++){
        if (!(binary_search(y,y+n-1, x[i]))){
            cout<<x[i]<<endl;
            break;
        }else{
             y[lower_bound(y,y+n-1, y[i]) - y ]=0;
        }
    }
    for(i=0;i<n-1;i++){
        if (!binary_search(z,z+n-2, r[i])){
            cout<<r[i]<<endl;
            break;
        }else{
             z[lower_bound(z,z+n-2, r[i]) - z ]=0;
        }
    }
    return 0;
}
