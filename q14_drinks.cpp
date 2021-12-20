#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long int ll;
ll mod=1e9+7; 
int main(){
	fastIO;
	double t;
	cin>>t;
	double input=t;
	double ans=0.00;
	while(t--)
	{
      int x;
      cin>>x;
      ans+=x/100.0;
	}cout<<setprecision(10)<<(ans/input)*100;
}