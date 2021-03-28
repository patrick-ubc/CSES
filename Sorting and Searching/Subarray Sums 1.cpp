#include <bits/stdc++.h>
using namespace std;


#define ll long long


/*
    This is a sliding window question!
*/

void solve(){
    int n, sum;
    cin>>n>>sum;

    int a[n];
    for(int i = 0; i<n; i++) cin>>a[i];

    int cur = 0;
    int i  = 0;
    int ans = 0;
    for(int j = 0; j<n; j++){
        cur += a[j];
        if(cur == sum){
            ans ++;
        }

        while(cur>=sum){
            cur -= a[i++];
            if(cur==sum) ans++;
        }
    }
    cout<<ans<<endl;
}




int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    /*
    int T;
    cin>>T;
    int i = 1;
    while(T--){
        cout<<"Case #"<<i++<<": ";
        solve();
    }
*/
    solve();

    return 0;
}
