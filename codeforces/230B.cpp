
 #include<bits/stdc++.h>
using namespace std;
const long long MAX_SIZE = 1000001;
vector<long long >isprime(MAX_SIZE , true);
vector<long long >prime;
vector<long long >SPF(MAX_SIZE);
 
void manipulated_seive(int N)
{
    isprime[0] = isprime[1] = false ;
 
    for (long long int i=2; i<N ; i++)
    {
        if (isprime[i])
        {
            prime.push_back(i);
            SPF[i] = i;
        }
        for (long long int j=0;
             j < (int)prime.size() &&
             i*prime[j] < N && prime[j] <= SPF[i];
             j++)
        {
            isprime[i*prime[j]]=false;
 
            SPF[i*prime[j]] = prime[j] ;
        }
    }
}
 
int main()
{
    int N = 1000000 ; 
    manipulated_seive(N);
    long long int a,b,c,d,e,f,g,h,i,j,k;
    vector < long long int > x;
    for(i=0;i<prime.size();i++){
        x.push_back(pow(prime[i],2));
    }
    cin>>a;
    while(a--){
        cin>>b;
        if(binary_search(x.begin(),x.end(),b)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
 
    return 0;
}
