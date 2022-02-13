#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,l,r) for(ll i=l;i<r;i++)
ll mod=1e9+7; 
int arr[30];
int main()
{
	string s;
	cin>>s;
	ll len=s.size();
	ll cn(0);
	rep(i,0,len)
	{
		arr[s[i]-'a']++;
	}
	rep(i,0,26)
	{
		if(arr[i]%2==1)
			cn++;
	}
	if(cn<=1)
		cout<<"First";
	else if(cn%2==0)
		cout<<"Second";
	else
		cout<<"First";


	}