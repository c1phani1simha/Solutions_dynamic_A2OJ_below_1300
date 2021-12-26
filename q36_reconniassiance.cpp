#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long int ll;
ll mod=1e9+7; 
int main(){
	fastIO;
	ll n;
	cin>>n;
	ll arr[n];ll min=0,one=0,two=1;
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n-1;++i)
	{
	  if((abs(arr[i]-arr[i+1]))<(abs(arr[one]-arr[two])))
	  {
       one=i;
       two=(i+1);
	  }	
	}
	if((abs(arr[n-1]-arr[0]))<(abs(arr[one]-arr[two])))
		{two=0;one=(n-1);}
	cout<<one+1<<" "<<two+1;
	}