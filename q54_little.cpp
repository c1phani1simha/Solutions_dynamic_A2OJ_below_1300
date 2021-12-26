#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long int ll;
ll mod=1e9+7; 
int arr[10000000];
void deset(int n)
{
	for(int i=1;i<=n;++i)
	{
		arr[i]=i;
	}
}
void process(int n)
{
  
   if(n>1)
   {
   	swap(arr[n-1],arr[n]);
   	process(n-1);
   }
}
int main(){
	fastIO;
	int n;
	cin>>n;
	deset(n);
	process(n);
    for(int i=1;i<=n;++i)
    {
    	cout<<arr[i]<<" ";
    }
}
