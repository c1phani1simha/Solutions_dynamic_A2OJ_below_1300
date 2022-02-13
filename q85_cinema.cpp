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
	ll a(0),b(0),c(0);
	for(int i=0;i<n;++i)
	{
		ll x;
		cin>>x;
		
		if(x==25)
			a++;
		else if(x==50)
		{
			b++;
			a--;
		}
		else if(x==100)
		{
			if(b>0)
			{
				
				a--;
				b--;
			}
			else
				a-=3;
		}
		if(a<0)
		return cout<<"NO"<<endl,0;
	}
	
		cout<<"YES"<<endl;
	

}