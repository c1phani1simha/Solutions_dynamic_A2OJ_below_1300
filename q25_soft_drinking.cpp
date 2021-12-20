#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long int ll;
ll mod=1e9+7; 
int main(){
	fastIO;
	ll n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	ll min1=(k*l)/nl;//Question comment has clear explaination
	ll min2=(c*d);
	ll min3=p/np;
	cout<<min(min(min1,min2),min3)/n;
}