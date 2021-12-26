#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long int ll;
ll mod=1e9+7; 
int main(){
	fastIO;
	map<string,int> storage;
	int n;
	cin>>n;string ss;
	for(int i=0;i<n;++i)
	{
		cin>>ss;
		storage[ss]++;
	}
	int max=0;
	string answer;
	for(auto &check:storage)
	{
		if(check.second>=max)
			{max=check.second;
				answer=check.first;}
	}
	cout<<answer;
}