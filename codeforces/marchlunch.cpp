#include <bits/stdc++.h>

using namespace std;



int main() {
    int t,i,c,s=0;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        c=0;
        for(i=0;i<a.size();i++){
            if(a.substr(i,i+1)=="ch" || a.substr(i,i+1)=="he" || a.substr(i,i+1)=="ef" ){
                c=c+1;
                break;
            }
        }
        if(c>0){
            s=s+1;
        }
    }
    cout<<s<<endl;
  return 0;
}