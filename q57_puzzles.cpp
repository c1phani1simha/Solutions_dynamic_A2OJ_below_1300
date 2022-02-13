#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,l,r) for(ll i=l;i<r;i++)
ll mod=1e9+7; 
int main()
{
	int n,m;
	cin>>n>>m;
	vector<int> store(m);
	rep(i,0,m)
	{
		cin>>store[i];
	}
	sort(store.begin(),store.end());
	int min=store[n-1]-store[0];
	for(int i=1;i<=(m-n);++i)
	{
	  if(min>(store[n-1+i]-store[i]))
	  	min=(store[n-1+i]-store[i]);
	}
	cout<<min;
}