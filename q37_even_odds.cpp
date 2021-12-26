#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long int ll;
ll mod=1e9+7; 
int main(){
	fastIO;
	ll n,k;
	cin>>n>>k;
	if(k<=(n+1)/2)
		cout<<(2*k)-1;
	else
	{
		cout<<(2*(k-((n+1)/2)));
	}
}