#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long int ll;
ll mod=1e9+7; 
int main(){
	fastIO;
	ll k,l,m,n,d;
	cin>>k>>l>>m>>n>>d;//Taking Input
	ll output=0;
	for(int i=1;i<=d;++i)
	{
		if(i%k==0||i%l==0||i%m==0||i%n==0)//If the ith dragon number is divisible,
		 ++output;                       //increase the count by 1
	}cout<<output;
}