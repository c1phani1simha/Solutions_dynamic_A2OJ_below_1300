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
	ll minl,maxr,l,r;
	ll num(1);
	cin>>minl>>maxr;
	for(int i=2;i<=n;++i)
	{
		cin>>l>>r;
		if(l<=minl&&r>=maxr)
			num=i;
		else if(l<minl||r>maxr)
			num=(-1);
		minl=min(minl,l);
		maxr=max(maxr,r);
	}
	cout<<num<<endl;
}