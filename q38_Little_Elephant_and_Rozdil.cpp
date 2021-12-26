#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long int ll;
ll mod=1e9+7; 
int main(){
	fastIO;
	int t;
	cin>>t;
	vector<int> store(t);
	vector<int> store2(t);
	for(int i=0;i<t;++i)
	{
		cin>>store[i];
		store2[i]=store[i];
	}
	sort(store.begin(),store.end());
	if(t>=2)
	{
		if(store[0]==store[1])
		{
			cout<<"Still Rozdil";return 0;
		}
		else
			{
				for(int i=0;i<t;++i)
				{
					if(store[0]==store2[i])
					{
						cout<<i+1;
						return 0;
					}
				}
			}
	}
	else
		cout<<1;
}