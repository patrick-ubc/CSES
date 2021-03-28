#include <bits/stdc++.h>
using namespace std;


#define ll long long

int num = 2e5;
int a[200000];

/*
    classical binary search problem.
*/

void solve(){
    int n, t;
    cin>>n>>t;

    int maxV = INT_MIN;

    for(int i= 0; i < n; i++){
        cin>>a[i];
        if(maxV < a[i]) maxV = a[i];
    }

    ll low = 0;
    ll high = (ll)t * maxV;

    while(low < high){
        ll mid = (low+high)/2;

        ll total = 0;
        //sum the value:
        for(int i = 0; i<n; i++){
            total += mid/a[i];
            if(total>t) break;
        }

        if(total<t){
            low = mid+1;
        }else{
            high = mid;
        }
    }

    cout<<high<<endl;

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
