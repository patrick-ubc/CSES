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

#define mod 1000000007
#define ll long long

/*
 I actually found that using recursion to do dfs is very easy and interesting.
 was wondering if bfs can be done in the same way.
 */

int n, m;

void dfs(vector<vector<bool>> &a, int i, int j){
    if(i<0 || i>= n || j<0 || j>=m || !a[i][j]) return;
    a[i][j] = false;
    
    dfs(a, i-1, j);
    dfs(a, i+1, j);
    dfs(a, i, j-1);
    dfs(a, i, j+1);
}


void solve(){
    cin>>n>>m;
    
    vector<vector<bool>> a(n, vector<bool>(m));
    
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            char c;
            cin>>c;
            a[i][j] = c=='.' ? true:false;
        }
    }
    
    int ans = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(a[i][j]){
                ans++;
                dfs(a, i, j);
            }
        }
    }
    
    
    cout<<ans<<endl;
    
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
