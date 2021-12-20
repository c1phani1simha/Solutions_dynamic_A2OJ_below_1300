#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long int ll;
ll mod=1e9+7; 
int main(){
	fastIO;
	string s;
	cin>>s;
	unordered_map<char,int> mm;//intialize unordered map to store distinct value
	for(auto &i:s)
		mm[i]++;
	ll count_x=0;
	for(auto &mp:mm)
	{
		count_x++;
	}
	if(count_x%2==0)
	{
		cout<<"CHAT WITH HER!";

	}
	else
		cout<<"IGNORE HIM!";
}