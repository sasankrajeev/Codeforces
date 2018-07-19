#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,b,i,j,l=0,o,k;
    cin>>n;
    vector <int>a;
    k=n;
    if(n%4==0 || n%7==0){
        cout<<"YES";
    }else{
         while(n!=0){
        b=n%10;
        n=n/10;
        a.push_back(b);
    }
    for(i=0;i<a.size();i++){
        if(a[i]==4||a[i]==7){
            l=l+1;
        }
    }
    if(l==a.size()){
        o=0;
    }else{
        o=1;
    }
    if(o==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    }
   
    return 0;
}
