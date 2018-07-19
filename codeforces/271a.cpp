#include <bits/stdc++.h>

using namespace std;

int main(){
    int i,j;
    int a,b,c,d,e;
    cin>>a;
    for(i=a+1;i<=9012;i++){
        b=i%10;
        c=i%100/10;
        e=i%1000/100;
        d=i%10000/1000;
        if(b!=c&&b!=d&&b!=e&&c!=e&&c!=d&&e!=d){
        cout<<i;
        return 0;
      }
   }
    return 0;
}
    
