#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i,l,r) for(ll i=l;i<r;i++)
ll mod=1e9+7; 
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
int main()
{
	fastIO;
	ll n;
	cin>>n;
	string s;
	cin>>s;
	ll cnt1(0),cnt2(0);
	sort(s.begin(),s.begin()+n);
	sort(s.begin()+n,s.end());
	ll j=n;
	for(int i=0;i<n;++i)
	{
		if(s[i]<s[j])
			cnt1++;
		if(s[i]>s[j])
			cnt2++;
		++j;
	}
	if(cnt1==n||cnt2==n)
		cout<<"YES";
	else
		cout<<"NO";

}