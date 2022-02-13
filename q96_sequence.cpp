		//**Jai Sri GoMata**//
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i,l,r) for(ll i=l;i<r;i++)
ll mod=1e9+7; 
#define SitaRam ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
ll arr[7];
int main()
{
	SitaRam;
	ll a,b,n;
	cin>>a>>b>>n;
    arr[1]=(a+mod)%mod;
    arr[2]=(b+mod)%mod;
    arr[3]=(b-a+mod)%mod;
    arr[4]=(-a+mod)%mod;
    arr[5]=(-b+mod)%mod;
    arr[6]=(a-b+mod)%mod;
    n%=6;
    if(n==0)
    	n=6;
    ll ans=(mod+arr[n])%mod;
    cout<<ans<<endl;
}