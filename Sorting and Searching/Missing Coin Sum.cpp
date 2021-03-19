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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    D(freopen("input.txt", "r", stdin);)

    int n;
    cin>>n;

    for(int i = 0; i<n; i++) cin>>a[i];

    sort(a, a+n);

    ll curSum = 0;
    for(int i = 0; i<n; i++){
        if(curSum + 1 < a[i] ) break;

        curSum += a[i];
    }

    cout<<curSum + 1<<endl;


    return 0;
}
