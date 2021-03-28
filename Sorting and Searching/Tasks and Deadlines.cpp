#include <bits/stdc++.h>
using namespace std;


#define ll long long

int num = 2e5;
int a[200000];

/*
    classical binary search problem.
*/

void solve(){
    int n;
    cin>>n;

    vector<pair<int,int>> v(n);
    for(int i  = 0; i<n; i++) {
        int a,d;
        cin>>a>>d;
        v[i] = pair<int,int>(a, d);
    }

    sort(v.begin(), v.end(), [](const pair<int,int> &l, const pair<int,int> &r){
            return l.first < r.first;
        });

    ll ans = 0;
    ll cur = 0;
    for(int i = 0; i<n; i++){
        ans += v[i].second - (cur + v[i].first);
        cur += v[i].first;
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
