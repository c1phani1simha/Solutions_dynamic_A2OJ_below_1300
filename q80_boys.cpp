#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i,l,r) for(ll i=l;i<r;i++)
ll mod=1e9+7; 
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
int main()
{
	fastIO;
	ll b,g;
	cin>>b>>g;
	if(b>g)
	{
		ll m=(b-g);
		while(g--)
		{
			cout<<"GB";
		}
		while(m--)
			cout<<"B";
	}
	else{
		ll m=(g-b);
		while(b--)
		{
			cout<<"BG";
		}
		while(m--)
			cout<<"G";
	}
}