#include <cstdio>
#ifdef DEBUG
    #define D(X) X
#else
    #define D(X)
#endif


#include <bits/stdc++.h>
using namespace std;


#define ll long long

const ll mod = 1e9+7;
const int mx = 1e6+2;
int a[mx];

/**
    easy question
*/


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    D(freopen("input.txt", "r", stdin);)

    int n;
    cin>>n;
    vector<vector<ll>> dp(n+1, vector<ll>(n+1, 0));
    dp[0][1] = 1;

    for(int i = 0; i<n; i++){
        for(int j = 0; j< n; j++){
            char c;
            cin>>c;
            if(c != '*'){
                dp[i+1][j+1] = (dp[i][j+1] + dp[i+1][j])%mod;
            }
        }
    }

    cout<<dp[n][n]<<endl;


    return 0;
}
