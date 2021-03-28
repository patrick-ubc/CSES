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
    a[0] = 0;
    for(int i = 1; i<=9; i++){
        a[i] = 1;
    }

    for(int i = 10; i<=n; i++){
        a[i] = INT_MAX;
        int val = i;
        while(val){
            int digit = val%10;
            if(digit != 0) a[i] = min(a[i], 1+a[i-digit]);

            val /= 10;
        }
    }

    cout<<a[n]<<endl;


    return 0;
}
