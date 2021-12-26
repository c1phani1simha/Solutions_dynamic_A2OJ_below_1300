#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long int ll;
ll mod=1e9+7; 
int main(){
	fastIO;
	int k,count(0);
	cin>>k;
	string s;
	cin>>s;char cc;
	sort(s.begin(),s.end());
	for(int i=0;i<s.length();++i)
	{
		if(i%k==0)
			cc=s[i];
		if(s[i]==cc)
		{
			count++;
		}
	}
	if(count==s.length()&&count%k==0)
	{
		for(int i=0;i<k;++i)
		{
			for(int j=0;j<s.length();j+=k)
			{
				cout<<s[j];
			}
		}
	}
	else
		cout<<-1;
}