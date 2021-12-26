#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long int ll;
ll mod=1e9+7; 
int main(){
	fastIO;
	int n,m;
	cin>>n;
	int arr1[n];
	for(int i=0;i<n;++i)
	{
		cin>>arr1[i];
	}
	cin>>m;
	int arr2[m];
	for(int i=0;i<m;++i)
	{
		cin>>arr2[i];
	}
	int ans = 0 ;
    int maxx = -1 ;
    for ( int i = 0 ; i < n; i ++ ){
        for ( int j = 0 ; j < m; j ++ ){
            if ( arr2[j] % arr1[i] == 0 ){
                maxx = max(maxx , arr2[j] / arr1[i]) ;
            }
        }
    }
    for ( int i = 0 ; i < n ; i ++ ){
        for ( int j = 0 ; j < m ; j ++ ){
            if ( arr2[j] % arr1[i] == 0 && arr2[j] / arr1[i] == maxx ){
                ans ++ ;
            }
        }
    }
	cout<<ans;
}