#include <bits/stdc++.h>

using namespace std;

int main(){
    vector <int>c;
    vector <int>d;
    int i,a,b,n,e=0,f=0;
    for(i=0;i<3;i++){
        cin>>a;
        c.push_back(a);
        e=e+c[i];
    }
    for(i=0;i<3;i++){
        cin>>b;
        d.push_back(b);
        f=f+d[i];
    }
    cin>>n;
    if(e%5==0){
        e=e/5;
    }else{
        if(e>=5){
             e=e/5+1;
        }else{
            e=1;
        }
    }
    if(f%10==0){
        f=f/10;
    }else{
        if(f>=10){
            f=f/10+1;
        }else{
            f=1;
        }
    }
    if(e+f<=n){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
