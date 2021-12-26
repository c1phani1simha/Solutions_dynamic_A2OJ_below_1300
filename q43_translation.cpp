#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long int ll;
ll mod=1e9+7; 
int main(){
	fastIO;
	string s1,s2,s3;
    cin>>s1>>s2;
    s3=s1+s2;
    reverse(s3.begin(),s3.end());
    if(s3==(s1+s2))
    	cout<<"YES";
    else
    	cout<<"NO";
}