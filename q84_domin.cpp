#include <bits/stdc++.h>
 
using namespace std;
 
const int N = 1e2;
 
int n;
int x[N+10],y[N+10],cnt1,cnt2;
 
int main()
{
    #ifdef LOCAL_DEFINE
        freopen("rush.txt","r",stdin);
    #endif // LOCAL_DEFINE
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n;
    for (int i = 1;i <= n;i++){
        cin >> x[i] >> y[i];
        if (x[i]&1) cnt1++;
        if (y[i]&1) cnt2++;
     }
     if (cnt1%2==0 && cnt2%2==0){
        cout<<0<<endl;
     }else if ( (cnt1+cnt2)%2 != 0){
        cout<<-1<<endl;
     }else{
        //cnt1+cnt2 == not odd
        for (int i = 1;i <= n;i++){
            if (x[i]&1 && y[i]%2==0)
                return cout<<1<<endl,0;
            if (x[i]%2==0 && y[i]&1)
                return cout<<1<<endl,0;
        }
        cout<<-1<<endl;
     }
 
    return 0;
}
