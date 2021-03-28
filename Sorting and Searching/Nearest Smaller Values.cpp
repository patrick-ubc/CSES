#include <bits/stdc++.h>
using namespace std;


#define ll long long


/*
    kind of like a dynamic programming question.
*/

void solve(){
    int n;
    cin>>n;

    int a[n+1];
    a[0] = INT_MIN;
    for(int i = 1; i<=n; i++) cin>>a[i];

    int ans[n+1];

    for(int i = 1; i<=n ;i++){
        int index = i-1;
        while(a[i]<=a[index]){
            index = ans[index];
        }
        ans[i] = index;
    }

    for(int i = 1; i<=n; i++) cout<<ans[i]<<" ";
    cout<<endl;
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
