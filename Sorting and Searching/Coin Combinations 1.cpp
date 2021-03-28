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
const int mx = 1e6+1;
ll a[mx];

/**
    easy question
    but please remember in this question 1+1+2 is different from 1+2+1
*/

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    D(freopen("input.txt", "r", stdin);)

    int n;
    int x;
    cin>>n>>x;

    set<int> s;
    for(int i = 0; i<n; i++){
        int b;
        cin>>b;
        s.insert(b);
    }
    memset(a, 0, x);

    a[0] = 1;

    for(int i = 1; i<=x; i++){
        for(auto it = s.begin(); it!= s.end(); it++){
            int k = i-*it;
            if(k>=0) a[i] = (a[i]+a[k])%mod;
        }
    }

    cout<<a[x]<<endl;

    return 0;
}
