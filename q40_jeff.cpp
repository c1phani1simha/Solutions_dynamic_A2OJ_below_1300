#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long int ll;
ll mod=1e9+7; 
int main(){
	fastIO;
	int n,zero(0),five(0);
	cin>>n;
	int x;
	for(int i=0;i<n;++i)
	{
		cin>>x;
		if(x==0)
		{
			zero++;
		}
		if(x==5)
			five++;
	}
	int random=(five/9);
	if(zero==0)
		{cout<<-1<<endl;return 0;}
	else if(five==0||five<9)
	{
		cout<<0<<endl;return 0;
	}
	else {
for(int i=0;i<(random*9);++i)
{
	cout<<5;
}for(int i=0;i<zero;++i)
{
	cout<<0;
}
	}
	}