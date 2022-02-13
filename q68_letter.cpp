#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,l,r) for(ll i=l;i<r;i++)
ll mod=1e9+7; 
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
int main()
{
	map<char,int> title;
	fastIO;string s,t;
	getline(cin,s);
	getline(cin,t);

	bool b=true;
	for(int i=0;i<s.size();i++)
	{
		
		title[s[i]]++;
	}
	for(int i=0;i<t.size();i++)
	{
		if(title[t[i]]>0||t[i]==' ')
		{
			title[t[i]]--;
			continue;
		}
		else {
			b=false;
			break;
		}
	}
	if(b==true)
		cout<<"YES"<<endl;
	 else
	 	cout<<"NO"<<endl;
}
