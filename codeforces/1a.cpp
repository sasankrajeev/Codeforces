#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int a,b,c,d,e,f,g=0,h,i,j;
    cin>>a;
    cin>>b;
    cin>>c;
    e=a%c;
    h=a/c;
    if(e==0){
        g=g+h;
    }else{
        g=g+h+1;
    }
    f=b%c;
    i=b/c;
    if(f==0){
        j=j+i;
    }else{
        j=j+i+1;
    }
    cout<<g*j<<" ";
}