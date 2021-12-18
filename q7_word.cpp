#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long int ll;
ll mod=1e9+7; 
ll count_1=0;
int main(){
	fastIO;
	string s;
	cin>>s;
    ll lenght=s.size();
    ll x=(lenght/2);
    for(int i=0;i<lenght;++i)
    {
    	if(s[i]>='A'&&s[i]<='Z')
         count_1++;
    }
    if(count_1>x)
    {
    	transform(s.begin(),s.end(),s.begin(),:: toupper);
    	cout<<s<<endl;
    }
    else
    {
    	transform(s.begin(),s.end(),s.begin(),:: tolower);
    	cout<<s<<endl;
    }

}