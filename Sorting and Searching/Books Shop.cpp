#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <functional>
#include <limits.h>
using namespace std;

#define mod 1000000007;

/*
 In every for loop, a new type of coin will be used, so cases will not be the same ever.
 This question is kind of similar to coin combination 2.But the coin combination goes from
 the front to the end; while this question goes from the end to the front.
 */

void solve(){
    int n, x;
    cin>>n>>x;
    
    int price[n];
    int page[n];
    
    for(int i = 0; i<n; i++) cin>>price[i];
    for(int i = 0; i<n; i++) cin>>page[i];
    
    int dp[x+1];
    memset(dp, 0, sizeof(dp));
    
    for(int i = 0; i<n; i++){
        for(int m = x; m>0; m--){
            if(m-price[i]>=0){
                dp[m] = max(dp[m], dp[m-price[i]]+page[i]);
            }
        }
    }
    cout<<dp[x]<<endl;
    
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
//    int T;
//    cin>>T;
//    int i = 1;
//    while(T--){
//        cout<<"Case #"<<i++<<": ";
//        solve();
//    }
}
