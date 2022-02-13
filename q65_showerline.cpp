#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,l,r) for(ll i=l;i<r;i++)
ll mod=1e9+7; 
int main()
{
	int arr[5]={0,1,2,3,4};
	int arr2[5][5];
	rep(i,0,5)
	{
		rep(j,0,5)
		cin>>arr2[i][j];
	}
	vector<ll>store;
	ll su(0);
	do{
        su=(arr2[arr[0]][arr[1]]+arr2[arr[1]][arr[0]]+2*(arr2[arr[2]][arr[3]]+arr2[arr[3]][arr[2]]))+(arr2[arr[1]][arr[2]]+arr2[arr[2]][arr[1]]+2*(arr2[arr[3]][arr[4]]+arr2[arr[4]][arr[3]]));
	    store.push_back(su);
	}while(next_permutation(arr,arr+5));
	sort(store.begin(),store.end());
	ll len=store.size()-1;
cout<<store[len];}