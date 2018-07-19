#include <bits/stdc++.h>
using namespace std;

int main() {
    string a;
    int i,j,k=0,l=0,m=0;
    cin>>a;
    int b=a.size();
    if(b==1 && a[0]>=97){
        j=a[0];
        j=j-32;
        a[0]=j;
        cout<<a[0];
    }else {
        for(i=0;i<b;i++){
        j=a[i];
    if(j<97){
        k=k+1;
       }
    }
    for(i=1;i<b;i++){
        if(a[0]>=97){
            l=1;
        }
        if(a[i]<97){
            m=m+1;
        }
    }
    if(k==b || (l==1 && m==(b-1))){
        for(i=0;i<b;i++){
        j=a[i];
    if(j>=97){
        j=j-32;
    }else{
        j=j+32;
    }
    a[i]=j;
     }
    }
    for(i=0;i<b;i++){
        cout<<a[i];
    }
    } 
}