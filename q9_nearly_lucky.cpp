#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long int ll;
ll mod=1e9+7; 
ll count_x=0;
int main(){
	fastIO;
	string s;
	cin>>s;
	for(auto &i:s)
	{
      if(i=='4'||i=='7')
      	++count_x;
	}
	if(count_x==4||count_x==7)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}