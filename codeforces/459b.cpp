#include<bits/stdc++.h>
using namespace std;
int main()
{
   
    long long int d,e,f,g=0,h=0,i,j,k,a,b,c;
    cin>>a;
    vector < long long int > y;
    for(i=0;i<a;i++){
        cin>>b;
        y.push_back(b);
    }
    sort(y.begin(),y.end());
    cout<<y[a-1]-y[0]<<" ";
    if(y[0]==y[a-1]){
        cout<<(a*(a-1)/2)<<endl;
    }else{
    for(i=0;i<a;i++){
        if(y[i]==y[0]){
            g++;
        }else if(y[i]==y[a-1]){
            h++;
        }
    }
    cout<<g*h<<endl;
    }
    return 0;
}
