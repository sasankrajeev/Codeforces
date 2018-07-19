#include <bits/stdc++.h>

using namespace std;

int main(){
    int i,b,n,j,e=0,h=0,k;
    char c[8][8];
    char y;
    char d[6];
    char g[6];
    int f[6];
    d[0]='Q';
    d[1]='R';
    d[2]='B';
    d[3]='N';
    d[4]='P';
    d[5]='K';
    g[0]='q';
    g[1]='r';
    g[2]='b';
    g[3]='n';
    g[4]='p';
    g[5]='k';
    f[0]=9;
    f[1]=5;
    f[2]=3;
    f[3]=3;
    f[4]=1;
    f[5]=0;
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            cin>>y;
            c[i][j]=y;
        }
    }
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            if(c[i][j]>='A' && c[i][j]<='Z'){
                for(k=0;k<6;k++){
                    if(c[i][j]==d[k]){
                        e=e+f[k];
                    }
                }
            }else if(c[i][j]>='a' && c[i][j]<='z'){
                for(k=0;k<6;k++){
                    if(c[i][j]==g[k]){
                        h=h+f[k];
                    }
                }
            }
        }
    }
    if(e>h){
        cout<<"White";
    }else if(e<h){
        cout<<"Black";
    }else{
        cout<<"Draw";
    }
    return 0;
}
