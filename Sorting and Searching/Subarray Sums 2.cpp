#include <bits/stdc++.h>
using namespace std;


#define ll long long


/*
    I'll give you hints:
     - use prefixsum
     - if prefixsum_b - prefixsum_a = sum, then prefixsum_a = prefixsum_b - sum;

    According to the second hint, you may simplify this question into a simple 2sum question!
*/

void solve(){
    int n, sum;
    cin>>n>>sum;

    ll a[n+1];
    a[0] = 0;
    for(int i = 1; i<=n; i++){
        int val;
        cin>>val;
        a[i] = a[i-1] + val;
    }

    map<ll, int> m;

    ll ans = 0;
    for(int i = 0; i<=n; i++){
        if(m.find(a[i]-sum) != m.end()) ans+=m[a[i]-sum];

        m[a[i]] ++;
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
