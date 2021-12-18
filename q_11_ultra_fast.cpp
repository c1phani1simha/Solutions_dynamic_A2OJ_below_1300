#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long int ll;
ll mod=1e9+7; 
int main(){
	fastIO;
	string s1,s2;
	cin>>s1>>s2;
	for(int i=0;i<s1.size();++i)
	{
		if(s1[i]==s2[i])
			cout<<"0";
		else
			cout<<"1";
	}
}