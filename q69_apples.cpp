#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,l,r) for(ll i=l;i<r;i++)
ll mod=1e9+7; 
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
int main()
{
	fastIO;
	ll n;
	cin>>n;ll sum_t(0),cnt(0);
	vector<ll> store(n);
	for(int i=0;i<n;++i)
	{
		cin>>store[i];
		sum_t+=(store[i]/100);
		if(store[i]/100==2)
			cnt++;
	}
    if(sum_t%2!=0||n==1)
    	cout<<"NO"<<endl;
    else if(cnt==n&&n%2!=0)
    	cout<<"NO"<<endl;
    else
    	cout<<"YES"<<endl;
	}
