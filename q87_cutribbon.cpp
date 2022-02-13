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
	ll n,a,b,c,pieces(0);
	cin>>n>>a>>b>>c;
	for(int i=0;a*i<=n;++i)
	{
		for(int j=0;(a*i+b*j)<=n;++j)
		{
			ll k=(n-a*i-b*j)/c;
			if(k*c+a*i+b*j==n)
                pieces=max(pieces,(i+j+k));
		}
	}
	cout<<pieces;

}