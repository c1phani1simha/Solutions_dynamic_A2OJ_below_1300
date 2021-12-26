#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long int ll;
ll mod=1e9+7; 
int main(){
	fastIO;
	string s;
	cin>>s;
	int le=s.size();
	string s1="1111111";
	string s2="0000000";
	if(s.find(s1)!=string::npos||s.find(s2)!=string::npos)
		cout<<"YES";
	else
		cout<<"NO";

}