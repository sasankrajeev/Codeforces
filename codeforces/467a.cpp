#include <bits/stdc++.h>

using namespace std;



int main() {
    int t,i,c,s,a=0;
    cin>>t;
    while(t--){
        cin>>i;
        cin>>c;
        if(c-i>=2){
            a=a+1;
        }
    }
    cout<<a;
  return 0;   
}