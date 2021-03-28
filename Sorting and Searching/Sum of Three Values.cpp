#include <bits/stdc++.h>
using namespace std;


#define ll long long

int num = 2e5;
int a[5000];

/*

*/

void solve(){
    int n;
    int x;
    cin>>n>>x;

    vector<pair<int,int>> v(n);

    for(int i = 0; i<n; i++){
        int b;
        cin>>b;
        v[i] = pair<int,int>(b,i+1);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i<n-2; i++){
        int target = x - v[i].first;

        int s = i+1;
        int e = n-1;
        while(s<e){
            if(v[s].first+v[e].first<target){
                s++;
            }else if(v[s].first+v[e].first>target){
                e--;
            }else{
                cout<<v[i].second<<" "<<v[s].second<<" "<<v[e].second<<endl;
                return;
            }
        }
    }

    cout<<"IMPOSSIBLE"<<endl;
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
