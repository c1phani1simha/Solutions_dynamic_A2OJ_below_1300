#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,l,r) for(ll i=l;i<r;i++)
ll mod=1e9+7; 
int main()
{
	int s,n,x,y;
	cin>>s>>n;
	vector<pair<int,int>>arr;
	
	rep(i,0,n)
	{
       
       cin>>x>>y;
       arr.push_back({x,y});
	}
	sort(arr.begin(),arr.end());
	for(int i=0;i<n;++i)
	{
		if(s<=arr[i].first)
			{cout<<"NO";return 0;}
		else
			s+=arr[i].second;
	}
	cout<<"YES";
}