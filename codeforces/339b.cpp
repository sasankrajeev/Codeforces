#include <bits/stdc++.h>

using namespace std;

int main() {
    
    long long int t,a,i,s,b,d;
    cin>>a;
    cin>>b;
    vector <int>c;    
    for(i=0;i<b;i++){
        cin>>d;
        c.push_back(d);
    }
    s=c[0]-1;
    for(i=1;i<b;i++){
        if(c[i]<c[i-1]){
            s=s+(a-c[i-1]+c[i]);
        }else if(c[i]>c[i-1]){
            s=s+(c[i]-c[i-1]);
        }else{
            s=s+0;
        }
    }
    cout<<s;
    return 0;
}
