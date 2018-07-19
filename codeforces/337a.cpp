#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,f[100];
    cin>>a;
    cin>>b;
    for(i=0;i<b;i++)
    {
        cin>>f[i];
    }
sort(f,f+b);
int min=f[a-1]-f[0];
for(i=a;i<b;i++)
{
    if((f[i]-f[i+1-a])<min)
    min=f[i]-f[i+1-a];
}
cout<<min;
return 0;
}