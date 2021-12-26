#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long int ll;
ll mod=1e9+7; 
int main(){
	fastIO;
	int n,x,Total=0,answer=0;
	cin>>n;
	for(int i=0;i<n;++i)
	{
		cin>>x;
        Total+=x;
    }
    for(int i=1;i<=5;++i)//then if total sum of fingers = 1 modulo (n+1), Dima will clean the room. So we should increase answer 
    	//if the remaining part after division by (n+1) is not 1.
    {
    	if((Total+i)%(n+1)!=1)
    	answer+=1;
    
    }cout<<answer;
    


}