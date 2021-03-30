#include <bits/stdc++.h>
using namespace std;


#define ll long long


/*
    very tricky question, there are few things to remember:
    - (-4 mod 5) is -4, not 1!!! so what you have to do with the result is to (-4 +5) mod 5, then you will get 1
    - if a mod n == b mod n, then (a-b) mod n = 0;

*/

void solve(){
    int n;
    cin>>n;

    int m[n];
    memset(m, 0, sizeof(m));
    m[0] = 1;

    ll ans = 0;
    ll prefixsum = 0;
    for(int i = 0; i<n; i++){
        int b;
        cin>>b;
        prefixsum += b;
        int mod = prefixsum%n;
        mod = (mod+n)%n;
        ans += m[mod];

        m[mod]++;
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
