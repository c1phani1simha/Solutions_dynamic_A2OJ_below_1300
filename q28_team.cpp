#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long int ll;
ll mod=1e9+7; 
int main(){
	fastIO;
	int t;
	cin>>t;
	int x,count_y=0;
    while(t--)
    {  int count_x=0;
    	for(int i=0;i<3;++i)
    	{
    		cin>>x;
    		count_x+=x;
            
    	}
    	if(count_x>=2)
            	{++count_y;}
     }cout<<count_y;
    


}