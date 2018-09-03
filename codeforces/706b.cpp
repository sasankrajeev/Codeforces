#include<bits/stdc++.h>
using namespace std;
int main()
{
   
    long long int d,e,f,g,h,i,j,k,a,b,c;
    cin>>a;
    vector <long long int > x;
    for(i=0;i<a;i++){
        cin>>b;
        x.push_back(b);
    }
    sort(x.begin(),x.end());
    cin>>c;
    while(c--){
        cin>>d;
        cout<<upper_bound(x.begin(),x.end(),d)-x.begin()<<endl;
    }
    return 0;
}
