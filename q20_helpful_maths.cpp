#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long int ll;
ll mod=1e9+7; 
int main(){
	fastIO;
	string s;
	cin>>s;
	vector<char> storage;
	for(auto &print:s)
	{
		if(print!='+')
        storage.push_back(print);
	}
	sort(storage.begin(),storage.end());
	ll total=storage.size();
	for(int i=0;i+1<storage.size();++i)
	{
		cout<<storage[i]<<'+';
	}cout<<storage[total-1];

}