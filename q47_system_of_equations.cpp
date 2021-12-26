#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long int ll;
ll mod=1e9+7; 
int main(){
	fastIO;
	int n,m;
	cin>>n>>m;int cn(0);
	for(int a=0;a<=m&&a*a<=n;++a)
	{
		int b=(n-a*a);
		if(b*b==(m-a))
			cn+=1;
	}
	cout<<cn<<endl;
}