#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i,l,r) for(ll i=l;i<r;i++)
ll mod=1e9+7; 
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
int main()
{
	fastIO;
	ll t;
	cin>>t;
	ll counter(0);
	double temp(0);
	for(int i=1;i<t;++i)
	{
		for(int j=i;(i*i)+(j*j)<=(t*t);++j)
		{
			
				temp=((i*i)+(j*j));
			if(int(sqrt(temp))*int(sqrt(temp))==temp)
				counter++;
		}
	}
	cout<<counter<<endl;
}