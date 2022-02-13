		//**Jai Sri GoMata**//
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i,l,r) for(ll i=l;i<r;i++)
ll mod=1e9+7; 
#define SitaRam ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
ll arr[25][61];
int main()
{
	SitaRam;
	ll n;
	cin>>n;
    while(n--)
    {
       ll x,y;
       cin>>x>>y;
       arr[x][y]++;
    }
    ll maxi(1);
    for(int i=0;i<=24;++i)
    {
      	for(int j=0;j<=60;++j)
      	{
      		maxi=max(maxi,arr[i][j]);
      	}
    }
    cout<<maxi<<endl;
}