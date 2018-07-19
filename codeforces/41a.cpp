#include <bits/stdc++.h>

using namespace std;

int main(){
    int i,c=0,d;
    string a,b;
    cin>>a;
    cin>>b;
    d=a.size();
    for(i=0;i<d;i++){
        if(a[i]==b[d-i-1]){
            c=c+1;
        }
    }
    if(c==d){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
    
