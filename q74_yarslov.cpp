#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i,l,r) for(ll i=l;i<r;i++)
ll mod=1e9+7;
int arr[1001]; 
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
int main()
{
	fastIO;
	int n;
	cin>>n;
	for(int i=0;i<n;++i)
	{
	  int x;
	  cin>>x;
	  arr[x]++;	
	}
	for(int i=0;i<1001;++i)
	{
		if(arr[i]>((n+1)/2))
	      {cout<<"NO"<<endl;return 0;}
	}
	cout<<"YES";
}