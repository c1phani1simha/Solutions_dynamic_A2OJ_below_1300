#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,l,r) for(ll i=l;i<r;i++)
ll mod=1e9+7; 
int main()
{
	ll n;
	cin>>n;
	vector<ll> store(n);
	rep(i,0,n)
	cin>>store[i];
	sort(store.begin(),store.end());
	ll maxvalue=(store[n-1]-store[0]);
	if(maxvalue==0)
     {
     	cout<<maxvalue<<" "<<(n*(n-1))/2;
     	return 0;
     }

	ll cn_min(0),cn_max(0);
	ll min=store[0];
	ll max=store[n-1];
	rep(k,0,n)
	{
		if(min==store[k])
			cn_min++;
		if(max==store[k])
			cn_max++;
	}
	cout<<(max-min)<<" "<<cn_min*cn_max;
}