#include <bits/stdc++.h>
using namespace std;


#define ll long long


/*
    Highly recommended question! I learnt so much from this question!!!
    Use some new technich:
     - create multiset: multiset<int> s(a, a+k);
     - use next() function.


     - insert will insert to the end! Given multiset m[1,1,1], m.insert(1) will
     insert 1 to the end of the multiset.:
        If the container has elements with equivalent key, inserts at the upper bound of that range.
     - if you can keep that the number of value between mid and the beginning of 
     the array, then it's the middle (this is very import to solve this problem);
*/

void solve(){
    int n, k;
    cin>>n>>k;

    int a[n];
    for(int i = 0; i<n; i++) cin>>a[i];

    multiset<int> s(a, a+k);
    auto mid = next(s.begin(), (k-1)/2);

    cout<<*mid<<" ";
    for(int i=k; i<n; i++){
        s.insert(a[i]);

        if(a[i]<*mid) mid--;
        if(a[i-k]<=*mid) mid++;
        cout<<*mid<<" ";
        s.erase(s.lower_bound(a[i-k]));
    }

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
