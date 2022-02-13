#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i,l,r) for(ll i=l;i<r;i++)
ll mod=1e9+7; 
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
int main()
{
	fastIO;
	ll n;
	cin>>n;
	vector<ll> arr(n);
	for(int i=0;i<n;++i)
	{
	    cin>>arr[i];	
	}
	ll sum=accumulate(arr.begin(),arr.end(),0);
	cout<<((sum%n==0)?n:(n-1));
}