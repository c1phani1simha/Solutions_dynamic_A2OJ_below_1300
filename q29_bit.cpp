#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long int ll;
ll mod=1e9+7; 
int main(){
	fastIO;
	int t;
	cin>>t;int x=0;
	while(t--)
	{
      string s;
      cin>>s;
      if(s=="X++")
      {
      	x++;
      }
      else if(s=="++X")
      	++x;
      else if(s=="X--")
      	x--;
      else
      	--x;
	}cout<<x;
}