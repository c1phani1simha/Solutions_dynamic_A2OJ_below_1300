#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long int ll;
ll mod=1e9+7; 
int main(){
	fastIO;
	string s;
	cin>>s;
	vector<int> v;
	for(int i=0;i<s.size();++i)
	{
		if(s[i]=='.')
			{v.push_back(0);}
		if(s[i]=='-'&&s[i+1]=='.')
			{v.push_back(1);
				++i;}
				if(s[i]=='-'&&s[i+1]=='-')
				{
					v.push_back(2);++i;
				}
	}
	for(auto &print:v)
		cout<<print;
}