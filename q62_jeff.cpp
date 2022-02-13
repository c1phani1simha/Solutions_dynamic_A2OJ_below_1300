#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,l,r) for(ll i=l;i<r;i++)
ll mod=1e9+7; 
int main()
{
	map<ll,ll> mp;
	ll n;
	cin>>n;
	vector<ll> store(n);
	rep(i,0,n)
	{
		cin>>store[i];
	}
	rep(j,0,n)
	{
		ll checker=store[j];
		rep(k,j,n)
		{
           if(checker==store[k])
           {
           	
           }
		}
	}
}