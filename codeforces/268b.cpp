#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n,i,s=0,l=0,k=1;
    cin >> n;
    if(n==1){
        cout<<1;
    }else if(n==2){
        cout<<3;
    }else{
        for(i=1;i<=n-2;i++){
            s=s+(n-i-1)*(k)+(n-i);
            l++;
            k++;
       }
        cout<<s+n+1;
    }
    return 0;
}
