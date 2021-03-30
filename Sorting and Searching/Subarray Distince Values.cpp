#include <bits/stdc++.h>
using namespace std;


#define ll long long


/*
    sliding window question:
    I found this graph very useful: https://leetcode.com/problems/subarrays-with-k-different-integers/discuss/523136/JavaC%2B%2BPython-Sliding-Window


    but noted that this question ask for ***AT MOST*** instead of ***EXACTLY***!!!!!

    this code is very easy to understand!
*/

void solve(){
    int n, k;
    cin>>n>>k;

    int a[n];
    for(int i = 0; i<n ;i++) cin>>a[i];

    map<int,int> m;
    ll ans = 0;
    int i = 0;
    for(int j = 0; j<n; j++){
        if(m[a[j]]++ == 0) k--;
        while(k<0){
            if(--m[a[i]] == 0) k++;
            i++;
        }
        ans += j-i+1;
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
