		//**Jai Sri GoMata**//
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i,l,r) for(ll i=l;i<r;i++)
ll mod=1e9+7; 
#define SitaRam ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
ll store[100010];
ll sortS[100010];
int main()
{
	SitaRam;
	ll m;
	cin>>m;
	for(int i=1;i<=m;++i)
	{
		cin>>store[i];
		sortS[i]=store[i];
	}
    sort(sortS+1,sortS+m+1);
    for(int i=1;i<=m;++i)
    {
    	store[i]+=store[i-1];
    	sortS[i]+=sortS[i-1];
    }
    ll t,type,l,r;
    cin>>t;
    while(t--)
    {
      cin>>type>>l>>r;
      if(type==1)
      {
      	cout<<(store[r]-store[l-1])<<endl;
      }
      if(type==2)
      {
      	cout<<(sortS[r]-sortS[l-1])<<endl;
      }
    }
}