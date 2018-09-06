#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    ll a,b,c,d,e,f,g=0,h=0,i;
    cin>>a;
    string y;
    cin>>y;
    vector < ll >x;
    for(i=0;i<a;i++){
        if(y[i]=='x'){
            h++;
        }else{
            g++;
        }
    }
    if(h==g){
        d=d+0;
    }else if(h>g){
       d=ceil((h-g)/2);
        for(i=0;i<a;i++){
            if(y[i]=='x'){
                y[i]='X';
                d--;
                if(d==0){
                    break;
                }
            }
        }
    }else if(g>h){
        d=ceil((g-h)/2);
        for(i=0;i<a;i++){
            if(y[i]=='X'){
                y[i]='x';
                d--;
                if(d==0){
                    break;
                }
            }
        }
    }
    cout<<min(abs(h-a/2),abs(g-a/2))<<endl;
    cout<<y<<endl;
}


