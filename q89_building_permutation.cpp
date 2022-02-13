		//**Jai Sri GoMata**//
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i,l,r) for(ll i=l;i<r;i++)
ll mod=1e9+7; 
#define SitaRam ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
int main()
{
	SitaRam;
	ll n;
	cin>>n;
	vector<ll> store(n);
	for(int i=0;i<n;++i)
	{
		cin>>store[i];
	}
	sort(store.begin(),store.end());
	ll ans(0);
	for(int i=1;i<=n;++i)
	{
		ans+=abs(store[i-1]-i);
	}
	cout<<ans<<endl;
}