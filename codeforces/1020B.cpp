#include    <bits/stdc++.h>

#define     ll         long long
#define     ld         long double
#define     pb         push_back
#define     ff         first
#define     ss         second
#define     mp         make_pair
#define     mod     1000000007
#define     pi         3.141592653589793

using namespace std;

int main()
{
    
    ll a,b,c,d,e,i,j,l,m,n,o,p,k;
    cin>>a;
    vector < ll > x;
    for(i=0;i<a;i++){
        cin>>m;
        x.push_back(m);     
    }
    for(i=1;i<=a;i++){
        ll y[a];
        for(j=1;j<=a;j++){
            y[j]=0;
        }
        //cout<<"RGGTJH"<<endl;
        l=0;
        k=i;
        while(l==0){
            y[k]=y[k]+1;
            k=x[k-1];
            if(y[k]==2){
                l=k;
                //cout<<k<<endl;
                //cout<<"NO"<<endl;
                break;
            }
        }
        cout<<l<<" ";
    }
    return 0;
}
