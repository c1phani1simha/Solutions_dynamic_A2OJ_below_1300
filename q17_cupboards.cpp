#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long int ll;
ll mod=1e9+7; 
int main(){
	fastIO;
	ll left=0,right=0;
	ll input,t;
	cin>>input;
	t=input;
	while(t--)
	{
    ll x,y;
		cin>>x>>y;
		left+=x;//counting number of ones
		right+=y;//counting number of ones
	}
	cout<<min(left,input-left)+min(right,input-right);//for minimum operations
}