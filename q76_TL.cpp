#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i,l,r) for(ll i=l;i<r;i++)
ll mod=1e9+7; 
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
int main()
{
	fastIO;
	ll n,k;
	cin>>n>>k;
	ll arr[n];
	ll arr2[k];
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	for(int i=0;i<k;++i)
	{
		cin>>arr2[i];
	}
	sort(arr,arr+n);
	sort(arr2,arr2+k);
	ll x=arr[0],y=arr[n-1],z=arr2[0];
	cout<<((max(2*x,y)<z)?max(2*x,y):-1);
}