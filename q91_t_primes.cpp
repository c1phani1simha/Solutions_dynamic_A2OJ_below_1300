		//**Jai Sri GoMata**//
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i,l,r) for(ll i=l;i<r;i++)
ll mod=1e9+7; 
#define SitaRam ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
bool prime[1000000];
int main()
{
	SitaRam;
	//square of prime numbers is t-primes(3-divisors)
	ll t;
	cin>>t;
     memset(prime,true,sizeof(prime));
     for(int i=2;i*i<=1000000;++i)
     {
     	if(prime[i]==true)
     	{
     		for(int j=i*2;j<=1000000;j+=i)
     		{
     			prime[j]=false;
     		}
     	}
     }
	while(t--)
	{
		ll x;
		cin>>x;
		ll b=sqrt(x);
		if(x==1)
			cout<<"NO"<<endl;
		else if(b*b==x&&prime[b]==true)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}