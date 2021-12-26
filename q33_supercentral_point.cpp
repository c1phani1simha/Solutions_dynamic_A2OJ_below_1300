#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long int ll;
ll mod=1e9+7; 
int main(){
	fastIO;
	int n,t(0);
	cin>>n;
	int x[n],y[n];
	for(int i=0;i<n;++i)
	{
		cin>>x[i]>>y[i];
	}
	for(int i=0;i<n;++i)
	{
	  bool r(false), l(false), u(false), d(false);
        for (int j = 0; j < n; j++)
        {
            if (x[j] > x[i] and y[j] == y[i]) r = true;
            if (x[j] < x[i] and y[j] == y[i]) l = true;
            if (x[j] == x[i] and y[j] > y[i]) u = true;
            if (x[j] == x[i] and y[j] < y[i]) d = true;
        }
        if (r and l and u and d) t++;	
	}
	cout<<t<<endl;
}