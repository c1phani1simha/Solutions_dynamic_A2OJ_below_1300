#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,l,r) for(ll i=l;i<r;i++)
ll mod=1e9+7; 
int main()
{
	int n,m,k(0);
	cin>>n>>m;
	vector<int> store(m);
	
	rep(i,0,m)
	{cin>>store[i];
		}
	int min=0,max(0);
	sort(store.begin(),store.end());
	int num(store[0]);
	rep(i,0,n)
	{
      min+=num;
      num-=1;
      if(num==0)
      	num=store[++k];
	}
    sort(store.begin(),store.end(),greater<int>());
	rep(i,0,n)
	{

		max+=store[0];
		store[0]-=1;
		rep(i,1,m)
		{
			if(store[i-1]>=store[i])
				break;
			swap(store[i],store[i-1]);
		}
	}
	cout<<max<<" "<<min;
}