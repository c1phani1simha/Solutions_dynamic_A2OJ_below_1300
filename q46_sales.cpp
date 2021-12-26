#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long int ll;
ll mod=1e9+7;
 
int main(){
	fastIO;
	int n,m;
	cin>>n>>m;
	int arr[n];
     int x;
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
          
	}
	sort(arr,arr+n);
	int cn=0;
    for(int i=0;i<m;++i)
    {
      if(arr[i]>=0)
      	break;
      cn+=arr[i];	
    }
    cout<<(-1)*cn;
}