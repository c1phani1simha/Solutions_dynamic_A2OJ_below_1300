#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,l,r) for(ll i=l;i<r;i++)
ll mod=1e9+7; 
int main()
{
	int x,y;
	cin>>x>>y;
	int arr[x][y];
	char temp;
	rep(i,0,x)
	{
		rep(j,0,y)
		{
           cin>>temp;
           if(temp=='.')
           	{
           		if((i+j)%2==0)
           			cout<<"B";
           		else
           			cout<<"W";
           	}
           else if(temp=='-')
           	cout<<temp;
       
		}cout<<endl;
	}
	
}