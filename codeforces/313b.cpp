#include <bits/stdc++.h>
using namespace std;


int main(int argc, char **argv)
{
    long long int n,i,j,k,a,b,c=0,d=0,e,l;
    vector < long long int> y;
     vector < long long int> z;
    string x;
    cin>>x;
    cin>>a;
        z.push_back(c);
    for(i=1;i<x.size();i++){
        if(x[i]==x[i-1]){
            c++;
            z.push_back(c);
        }else{
            z.push_back(c);
        }
        
    }
    for(i=0;i<a;i++){
        cin>>b;
        cin>>d;
        cout<<z[d-1]-z[b-1]<<endl;
    }
    
    return 0;
}
