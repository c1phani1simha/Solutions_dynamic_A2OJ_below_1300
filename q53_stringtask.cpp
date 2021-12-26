#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long int ll;
ll mod=1e9+7;
//deletes all the vowels,
//inserts a character "." before each consonant,
//replaces all uppercase consonants with corresponding lowercase ones.
bool UPPERCONSONANT(char x)
{
	if('A'<=x<='Z')
	{
		if(x=='A'||x=='E'||x=='O'||x=='I'||x=='U')
		return false;
        else
        return true;
	}

}
bool isVowel(char x)
{
	if(x=='a'||x=='e'||x=='o'||x=='i'||x=='u'||x=='A'||x=='E'||x=='O'||x=='I'||x=='U'||x=='Y'||x=='y')
		return true;
	else
		return false;
} 
int main(){
	fastIO;
	string s;
	vector<char> store;
	cin>>s;
    for(auto &c:s)
    {
    	if(c<='Z'&&c>='A')
    	{
    		c=c+32;
    	}
    	if(!isVowel(c))
    	{
    		store.push_back('.');
    		store.push_back(c);
    	}
    }
	for(auto &print:store)
		cout<<print;
    
}