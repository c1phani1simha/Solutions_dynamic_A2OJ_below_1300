#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,l,r) for(ll i=l;i<r;i++)
ll mod=1e9+7; 
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
int main()
{
	fastIO;
	bool check=true;
	string s,t;vector<ll> index;
	cin>>s>>t;ll cnt(0);
	if(s.size()!=t.size())
		{cout<<"NO"<<endl;return 0;}
	else {
		for(int i=0;i<s.size();++i)
		{
			if(s[i]!=t[i])
			{
              cnt++;
              index.push_back(i);
			}
		}
		if(cnt==2)
		{
			if(s[index[0]]!=t[index[1]]||s[index[1]]!=t[index[0]])
				{check=false;}
			
		}
		else
			check=false;
		
		
	}
	if(check)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}