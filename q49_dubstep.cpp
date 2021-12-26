#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long int ll;
ll mod=1e9+7; 
int main(){
	fastIO;
	string s;
	cin>>s;bool pass=true;
	for(int i=0;i<s.size();++i)
	{
	  	if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
	  	{
	  		i+=2;
	  		if(!pass)
	  			{cout<<" ";
	  		continue;}

	  	}
	  	else 
	  	{
	  		pass=false;
	  		cout<<s[i];
	  	}

	}
	
}