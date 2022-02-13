#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,l,r) for(ll i=l;i<r;i++)
ll mod=1e9+7; 
int main()
{
	ll checker(0),cont(1);
	ll n,k;
	cin>>n>>k;ll x;
	rep(i,0,n)
	{
		
		cin>>x;
		if(x==checker)
			cont+=1;
		else
			cont=1;
		checker=x;
	}
	cout<<(((cont+k)>n)?(n-cont):-1);
}