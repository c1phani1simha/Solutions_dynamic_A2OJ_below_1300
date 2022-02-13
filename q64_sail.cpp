#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,l,r) for(ll i=l;i<r;i++)
ll mod=1e9+7; 
int main()
{
	ll n,sx,sy,ex,ey;
	cin>>n>>sx>>sy>>ex>>ey;
	string s;
	cin>>s;ll time(-1);
	rep(i,0,n)
	{
		switch(s[i])
		{
			case 'E':
			if(sx<ex)
			{
				sx+=1;
			}break;
			case 'S':
			if(sy>ey)
			{
				sy-=1;
			}break;
			
			case 'W':
			if(sx>ex)
			{
				sx-=1;
			}break;
			case 'N':
			if(sy<ey)
			{
				sy+=1;
			}break;
			default:
			break;
			

		}
		if(sx==ex&&sy==ey)
			{
				time=(i+1);
				break;
			}

	}cout<<time;
}