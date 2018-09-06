#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

   ll a,b,c;
   cin>>a>>b>>c;
     ll flag=0;
     ll x;
     for(ll i=-1000;i<=10000;i++)
     {

          ll k=a*pow(i,c);
               if(k==b)
               {
                   flag=1;
                    x=i;
                   break;
               }

         }
           if(flag==1)
           {
               cout<<x;
           }
           else
           {
                cout<<"No solution";
           }
           }


