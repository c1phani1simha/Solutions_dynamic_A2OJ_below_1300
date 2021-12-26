#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long int ll;
//1 14 144
ll mod=1e9+7; 
int main(){
	fastIO;
	string sss;
	cin>>sss; 
	for(int i=0;i<sss.size();++i)
	{
	  
	     if(sss[i]=='1'&&sss[i+1]=='4'&&sss[i+2]=='4')
	   {
         i+=2;
	   }
	   else if(sss[i]=='1'&&sss[i+1]=='4')
	   {
	   	i+=1;
	   }
	   
	    else if(sss[i]=='1')
	  {
	  	continue;
	  }
	   else
	   {
	   	cout<<"NO";
	   	return 0;
	   }
	} 
	cout<<"YES";
}