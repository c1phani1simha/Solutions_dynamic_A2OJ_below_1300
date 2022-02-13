#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,l,r) for(ll i=l;i<r;i++)
ll mod=1e9+7; 
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<=n;++i)
	{
		for(int j=i;j<n;++j)
		{
			cout<<"  ";
		}
		
		
		for(int j=0;j<=i;++j)
		{
			cout<<j;
			if(i!=0)
				cout<<" ";
		}
		for(int k=i-1;k>=0;--k)
		{
			cout<<k;
			if(k)
				cout<<" ";
		}cout<<endl;

	}
	for(int i=n-1;i>=0;--i)
	{
		for(int j=n-1;j>=i;--j)
		{
			cout<<"  ";
		}
		for(int j=0;j<=i;++j)
		{
			cout<<j;
			if(i!=0)
				cout<<" ";
		}
		for(int k=i-1;k>=0;--k)
		{
			cout<<k;
			if(k)
				cout<<" ";
		}cout<<endl;
	}
	}

/*  0
  0 1 0
0 1 2 1 0
  0 1 0
    0*/