#include<bits/stdc++.h>
using namespace std;
int main()
{
   
    long long int d,e,f,g,h,i,j,k,a,b,c;
    cin>>a;
    cin>>b;
    string x;
    vector < string > y;
    for(i=0;i<2*b;i++){
        cin>>x;
        y.push_back(x);
    }
    for(i=0;i<a;i++){
        cin>>x;
        for(j=0;j<2*b;j=j+2){
            if(x==y[j]){
                c=y[j].size();
                d=y[j+1].size();
                if(d<c){
                    cout<<y[j+1]<<" ";
                    break;
                }else{
                    cout<<y[j]<<" ";
                    break;
                }
            }
        }
    }
    return 0;
}
