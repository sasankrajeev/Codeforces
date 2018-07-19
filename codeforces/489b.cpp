#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,i,b,n,j,e=0,h=-1,k;
    cin>>a;
    vector <int>c;
    vector <int>d;
    for(i=0;i<a;i++){
        cin>>n;
        c.push_back(n);
    }
    cin>>b;
    for(i=0;i<b;i++){
        cin>>n;
        d.push_back(n);
    }
    sort(c.begin(),c.end());
    sort(d.begin(),d.end());
    for(i=0;i<a;i++){
        for(j=h+1;j<b;j++){
            if(abs(c[i]-d[j])<2){
                e=e+1;
                h=j;
                break;
            }          
        }
    }
               cout<<e;
    return 0;
}
