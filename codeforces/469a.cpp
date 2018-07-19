#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long m,n,a,c,d,e;
    cin>>n;
    cin>>m;
    vector <int>b;
    vector <int>h; 
    while(m--){
        cin>>a;
        b.push_back(a);
    }
    cin>>c;
    while(c--){
        cin>>a;
        b.push_back(a);
    }
    sort(b.begin(),b.end());
    for(d=0;d<b.size();d++){
        if(b[d]!=b[d+1]){
            h.push_back(b[d]);
        }
    }
    if(n==h.size()){
        cout<<"I become the guy.";
    }else{
        cout<<"Oh, my keyboard!";
    }
    return 0;
}