#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long int ll;
ll mod=1e9+7; 
int main(){
	fastIO;
	ll n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	for(int j=0;j<t;++j)
	{
		for(int i=0;i<n;++i)
		{
		  if(s[i]=='B'&&s[i+1]=='G')
		  {
		  	swap(s[i],s[i+1]);
		  	i++;
		  }	
		}
	}
	cout<<s<<endl;
}