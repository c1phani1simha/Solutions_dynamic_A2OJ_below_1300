#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long int ll;
ll mod=1e9+7; 
int main(){
	fastIO;
	int n,arr[7];
	cin>>n;
	for(int i=0;i<7;++i)
	{
	cin>>arr[i];	
	}
	int sum=arr[0];
	int t=0,i=0;
	while(sum<n)
	{
      i++;
      i=(i%7);
      sum+=arr[i];

	}cout<<i+1;
}