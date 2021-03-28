#include <bits/stdc++.h>
using namespace std;


#define ll long long

int num = 2e5;
int a[200000];

/*
    wonderful question, there are only two cases:
     first we sort the array in ascending order: [a_1, a_2, ..., a_n]
     - sum < 2*a_n => a_1+a_2+...+a_{n-1} < a_n, in this case, the first person will read
     a_1, a_2, ..., a_n in order, and the second person will read a_n, a_1, a_2, ..., a_{n-1}.
     - sum > 2*a_n => a_1+a_2+...+a_{n-1} > a_n, in this case, the first person will read books
     in order, while the second person will read a_n, a_1, a_2, ..., a_{n-1}.
*/

void solve(){
    int n ;
    cin>>n;

    ll maxV = LLONG_MIN;
    ll sum = 0;
    for(int i = 0 ;i<n; i++){
        ll v;
        cin>>v;
        maxV = max(maxV, v);
        sum += v;
    }

    cout<<max(sum, 2*maxV)<<endl;

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
