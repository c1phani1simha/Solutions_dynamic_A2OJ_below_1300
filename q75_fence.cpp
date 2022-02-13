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
	ll arr[n+1];
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	ll sum(0),min_ind(1);
	for(int i=0;i<k;++i)
	{
	   	sum+=arr[i];
	}
	ll min_sum=sum;
	for(int i=1;i<=n-k;++i)
	{
		sum-=arr[i-1];
		sum+=arr[i+k-1];
		if(sum<min_sum)
		{
			min_sum=sum;
			min_ind=(i+1);
		}
		//cout<<sum<<" "<<min_sum<<endl;
	}
	cout<<min_ind;
}