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
	/*for(int i=0;i<n;++i)
	{
		cout<<(3*(n+i))<<endl;
	}*/
	for(int i=n+1;i<=2*n;++i)
		cout<<i<<endl;
}