#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,i,d,c=1,j,h=0;
    vector <int>b;
    vector <int>e;
    cin>>a;
    d=a;
    while(a--){
        cin>>j;
        b.push_back(j);
    }
    for(i=0;i<d-1;i++){
        if(b[i]<=b[i+1]){
            c=c+1;
        }else{
            
            c=1;
            h=h+1;
        }
        e.push_back(c);
    }
    sort(e.begin(),e.end());
    if(h==0){
        cout<<c;
    }else{
        cout<<e[e.size()-1];
    }
return 0;
}