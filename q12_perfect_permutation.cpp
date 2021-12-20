#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long int ll;
ll mod=1e9+7; 
int main(){
	fastIO;
	int t;
	cin>>t;
	if(t%2==1)
		cout<<"-1";
	else
	{   
		for(int i=1;i<=t;++i)
		{
			if(i%2==0)cout<<i-1<<" ";
			else
				cout<<i+1<<" ";
		}
	}
}