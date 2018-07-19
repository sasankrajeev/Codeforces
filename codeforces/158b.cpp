#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c=0,i,j=0,d=0,e=0,f=0;
    cin>>b;
    vector <int>k;
    for(i=0;i<b;i++){
        cin>>a;
        if(a==1){
            c=c+1;
        }else if(a==2){
            d=d+1;
        }else if(a==3){
            e=e+1;
        }else{
            f=f+1;
        }
    }
    if(d%2==0){
        j=d/2;
    }else{
        j=d/2+1;
    }
    if(e<c){
        j=j+e;
        c=c-e;
        e=0;
    }else{
        j=j+c;
        e=e-c;
        c=0;
    }
    if(d>c){
        if(d%2==0){
             j=j+d/2;
             d=0;
        }else{
            j=j+d/2;
            j=j+1;
            if(c>=2){
                c=c-2;
            }else{
                c=0;
            }
        }
    }
    if(c%4==0){
        j=j+c/4;
    }else{
        j=j+c/4+1;
    }
    cout<<j;
}