		//**Jai Sri GoMata**//
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i,l,r) for(ll i=l;i<r;i++)
ll mod=1e9+7; 
#define SitaRam ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
ll arr[27];
int main()
{
	SitaRam;
	ll n,k;
	cin>>n>>k;
	string s;
	cin>>s;
    for(auto &check:s)
	{
      arr[check-'A']++;
	}
	sort(arr,arr+26,greater<>());
	ll sum(0);
	for(int i=0;i<26;++i)
	{
		if(arr[i]==0)
			break;
		if(k==0)
			break;
		if(arr[i]>=k)
			{sum+=(k*k);
				break;
			}
			else
			{
				sum+=(arr[i]*arr[i]);
				k-=arr[i];
			}
	}
	
	cout<<sum<<endl;
}