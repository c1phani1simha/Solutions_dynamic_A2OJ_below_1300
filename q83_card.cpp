#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i,l,r) for(ll i=l;i<r;i++)
ll mod=1e9+7; 
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

int main()
{
   fastIO;
   ll n;
   cin>>n;
   n*=2;
   map<ll,vector<ll>> store;
   for(int i=0;i<n;++i)
   {
   	  ll x;
   	  cin>>x;
   	  store[x].push_back(i+1);
   }
   for (auto &check:store)
        {
            if ((check.second).size() & 1)
            {
                cout<< -1;
                return 0;
            }
        }
   for(auto &print:store)
   {
   	auto &dual=print.first;
   	auto &single=print.second;
  for(auto &done:single)
  	cout<<done<<" ";
  cout<<endl;

   }

}