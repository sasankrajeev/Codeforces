#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,i,c=0,d;
    cin>>a;
    cin>>b;
    i=a;
    while(a/b>0){
        c=c+a/b;
        a=a/b+a%b;
    }
    cout<<c+i;
    return 0;
}
