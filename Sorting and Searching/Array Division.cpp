#include <bits/stdc++.h>
using namespace std;


#define ll long long


/*
    Binary search question
    cnt<=k means sum should be smaller or equal, so h = mid instead of mid-1
    cnt>k means sum should be bigger, so l = mid+1 instead of mid.
    also, the program didn't stop even when cnt == k, cause we have to find
    the smallest value.
*/

void solve(){
    int n, k;
    cin>>n>>k;

    int a[n];
    ll h = 0;
    ll l = 0;
    for(int i = 0; i<n; i++){
        cin>>a[i];
        h += a[i];
        l = max(l, (ll)a[i]);
    }

    while(l<h){
        ll mid = (l+h)/2;

        int cnt = 1;
        // somehow count cnt:
        ll cur = 0;
        for(int i = 0; i<n; i++){
            cur += a[i];
            if(cur > mid){
                cur = a[i];
                cnt ++;
            }
        }



        if(cnt<=k){
            h = mid;
        }else{
            l = mid+1;
        }

    }

    cout<<l<<endl;
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
