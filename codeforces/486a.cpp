#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,i,s=0,j;
    cin>>a;
    i=a%2;
    j=a/2;
    if(i==0){
        s = s - (a/2)*(a/2);
    }else{
        s = s - (a/2+1)*(a/2+1);
    }
    s=s+(j)*(j+1);
    cout<<s;
return 0;
}