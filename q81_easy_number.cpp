#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i,l,r) for(ll i=l;i<r;i++)
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define N 1010100
ll arr[N];
int main()
{
	fastIO;
	
	memset(arr,0,sizeof(arr));
	ll a,b,c;
	cin>>a>>b>>c;
	ll m=(a*b*c);
	//To know the count of divisors till m for each number
	for(int i=1;i<=m;++i)
	 {
	 	for(int j=i;j<=m;j+=i)
	 	{
	 		arr[j]++;
	 	}
	 } 
   ll ans = 0, mod = 1073741824;
        for(int i=1;i<=a;++i)
     {
       for(int j=1;j<=b;++j)
       	{
       	  for(int k=1;k<=c;++k)
       	  	{
       	  		ans+=arr[i*j*k];
       	  		ans%=mod;
       	  	}	
       	}	
     }
     cout<<ans<<endl;
     return 0;


}