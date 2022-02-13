		//**Jai Sri GoMata**//
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i,l,r) for(ll i=l;i<r;i++)
ll mod=1e9+7; 
#define SitaRam ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
int main()
{
	SitaRam;
	ll n;
	cin>>n;
	ll i,a[n],one=0,sum=0,ans;
        for(i=0; i<n; i++){
            cin>>a[i];
            if(a[i]==1)
                one++;
        }
        ans=0;
        for(i=0; i<n; i++){
            if(a[i]==0)
				sum+=1;
			else
				sum-=1;
			ans=max(ans,sum);
			if(sum<0)
				sum=0;
        }
        if(one==n)
			cout<<n-1<<endl;
		else
           cout<<one+ans<<endl;
	

}