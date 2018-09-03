#include<bits/stdc++.h>
using namespace std;
int main()
{
   
    long long int d,e,f,g,h,i,j,k;
    vector < char > x;
    char a,b,c;
    a='a';
    b='b';
    c='c';
    cin>>d;
    if(d==1){
        cout<<'a';
    }else{
    for(i=1;i<=2;i++){
        x.push_back('a');
    }
    for(i=3;i<=d;i++){
          if(x[i-3]=='a'){
                x.push_back('b');
          }else{
                x.push_back('a');
          }
    }
    for(i=0;i<x.size();i++){
        cout<<x[i];
    }
    }
    return 0;
}
