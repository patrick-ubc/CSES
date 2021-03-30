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
 */

void solve(){
    int n, x;
    cin>>n>>x;
    
    int a[n];
    for(int i = 0; i<n; i++) cin>>a[i];
    
    int dp[x+1];
    
    memset(dp, 0, sizeof(dp));
    
    dp[0] = 1;
    
    for(int i = 0; i<n; i++){
        for(int w = 1; w<=x; w++){
            if(w-a[i]>=0){
                dp[w] = (dp[w] + dp[w-a[i]])%mod;
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
