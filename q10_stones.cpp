#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long int ll;
ll mod=1e9+7; 
int main(){
	fastIO;
	ll n;
	cin>>n;
	string s;
	cin>>s;ll count=0;
	for(int i=0;i+1<n;++i)
	{
	   if(s[i]==s[i+1])	
	   	++count;
	}
	cout<<count;
}