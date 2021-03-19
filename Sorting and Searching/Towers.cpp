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
    loop invariant: when enter loop i, check if there is a place i can put the cube in
    if yes, then choose the smallest upper_bound, if no, then create a new tower for it

    important things to notice:
     - multiset can store the same value twice (which is different from set)
     - lower_bound(first, last, val) returns auto it points to a value which is **greater or euqal**
     than val within [first, last).
     - upper_bound(first, last, val) returns auto it points to a value which is just **greater** than
     val within [first, last)
*/

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    D(freopen("input.txt", "r", stdin);)

    int n;
    cin>>n;

    multiset<int> ans;
    while(n--){
        int b;
        cin>>b;

        auto it = ans.upper_bound(b);
        if(it != ans.end()) ans.erase(it);

        ans.insert(b);
    }



    cout<<ans.size();


    return 0;
}
