#include <cstdio>
#ifdef DEBUG
    #define D(X) X
#else
    #define D(X)
#endif


#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007

#define ll long long

const int mxN = 2e5;
int a[mxN];

/**
    loop invariant: during each iteration,
        - cur will maintain max playlist length end with index i;
        - max will maintain max playlist length within index 0...i;
        - m will maintain the latest index of key within index 0...i;
*/

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    D(freopen("input.txt", "r", stdin);)

    int n;
    cin>>n;

    int ans = 0;
    int cur = 0;
    map<int,int> m;
    for(int i = 0; i<n; i++){
        int b;
        cin>>b;
        if(m.find(b) != m.end()){
            if(m[b] >= i - cur){
                cur = i - m[b] - 1;
            }
        }
        m[b]  = i;
        cur ++;
        ans = max(ans, cur);
    }
    cout<<ans<<endl;


    return 0;
}
