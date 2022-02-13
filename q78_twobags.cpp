#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i,l,r) for(ll i=l;i<r;i++)
ll mod=1e9+7; 
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
int main()
{
	fastIO;
	ll y,k,n;
	while(cin>>y>>k>>n)
	{
		ll r=(k-(y%k));
		ll m=(n-y);
		if(r<=m)
		{
			cout<<r<<" ";
			r+=k;
			while(r<=m)
			{
				cout<<r<<" ";
				r+=k;
			}
		}
		else
			cout<<"-1";
	}
}