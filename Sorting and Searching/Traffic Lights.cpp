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
    loop invariant:
        - lights used to store the location of traffic lights
        - dist (multiset) used to store the distance between traffic lights
    Import things to notice:
         - when you use multiset and want to erase a value in multiset, please *****DO BE AWARE THAT*****
        **DO NOT** use ms.erase(val), because it will erase all instanse of val, instead, you **SHOULD**
        use ms.erase(ms.find(val)).
*/

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    D(freopen("input.txt", "r", stdin);)

    int n;
    int k;
    cin>>n>>k;

    set<int> lights;
    multiset<int> dist;

    dist.insert(n);
    lights.insert(0);
    lights.insert(n);

    while(k--){
        int b;
        cin>>b;

        auto it = lights.lower_bound(b);


        int upper = *it;
        it--;
        int lower = *it;
        dist.insert(upper - b);
        dist.insert(b - lower);
        dist.erase(dist.find(upper - lower));


        lights.insert(b);

        auto ans = dist.end();
        cout<<*(--ans)<<endl;
    }



    return 0;
}
