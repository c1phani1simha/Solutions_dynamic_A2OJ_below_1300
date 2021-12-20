#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long int ll;
ll mod=1e9+7; 
ll count_x=0;
int main(){
	fastIO;
	ll t;
	cin>>t;
	vector<long long> v(t);//making a vector to store values
	for(auto &in:v)
		cin>>in;
	ll max=v[0];//intializing minimum  and maximum values
	ll min=v[0];
	
	for(int i=1;i<t;++i)
	{
		if(max>v[i])//comparing them and increasing our count value
			{max=v[i];
				++count_x;}
		if(min<v[i])
		{
			min=v[i];
			++count_x;
		}
	}
	cout<<count_x;
}