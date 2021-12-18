#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long int ll;
ll mod=1e9+7; 
int main(){
	fastIO;
	ll x,y,z;x=0;y=0;z=0;
    ll n;
    cin>>n;
    while(n--)
    {
    	ll t1,t2,t3;
    	cin>>t1>>t2>>t3;
    	x+=t1;y+=t2;z+=t3;
    }
    if(x==0&&y==0&&z==0)
    	cout<<"YES"<<endl;
    else
    	cout<<"NO";
}