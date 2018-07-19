#include <bits/stdc++.h>

using namespace std;

int main(){
    int b,i,c=0,d,f=0;
    string a;
    cin>>b;
    cin>>a;
    vector <int>e;
    for(i=0;i<26;i++){
        e.push_back(c);
    }
    for(i=0;i<b;i++){
        d=int(a[i]);
        if(d>96){
            e[d-97]=e[d-97]+1;
        }else{
            e[d-65]=e[d-65]+1;
        }
    }
    for(i=0;i<26;i++){
        if(e[i]>0){
            f=f+1;
        }
    }
    if(f>=26){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
