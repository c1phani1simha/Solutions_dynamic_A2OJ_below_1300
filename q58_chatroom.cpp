#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,l,r) for(ll i=l;i<r;i++)
ll mod=1e9+7; 
int main()
{
	string s;
	cin>>s;
	int j=0,pas=0;
	string checker="hello";
	rep(i,0,s.size())
	{
      if(checker[j]==s[i])
      {
      	pas++;
      	j++;
      }
	}
	if(pas==5)cout<<"YES";
	else
		cout<<"NO";
}