#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define ll long long

int dirx[8] = {-1, 0, 0, 1, -1, -1, 1, 1};
int diry[8] = {0, 1, -1, 0, -1, 1, -1, 1};
const ll MOD = 1000000007;

/*
    a very good bfs question
*/

char instruction[4] = {'U', 'R', 'L', 'D'};

void solve(){
    int n, m;
    cin>>n>>m;

    bool a[n][m];
    char ins[n][m];
    pair<int,int> start;
    pair<int,int> end;
    queue<pair<int,int>> q;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            char c;
            cin>>c;

            if(c=='#') a[i][j] = false;
            else if(c=='.') a[i][j] = true;
            else if(c=='A'){
                q.push(pair<int,int>(i, j));
                start = pair<int,int>(i, j);
                a[i][j] = false;
            }else{
                end = pair<int,int>(i,j);
                a[i][j] = true;
            }
        }
    }


    while(!q.empty()){
        pair<int,int> p = q.front();
        q.pop();

        if(p == end) break;


        for(int k = 0; k<4; k++){
            int i = p.fi + dirx[k];
            int j = p.se + diry[k];
            if(i>=0 && i<n && j>=0 && j<m && a[i][j]){
                a[i][j] = false;
                q.push(pair<int,int>(i, j));
                ins[i][j] = instruction[k];
            }
        }
    }

    if(a[end.fi][end.se]){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
        string ans = "";
        int i = end.fi, j = end.se;
        while(i!=start.fi || j!=start.se){
            switch (ins[i][j]) {
                case 'U':
                    i++;
                    ans += 'U';
                    break;
                case 'D':
                    i--;
                    ans += 'D';
                    break;
                case 'L':
                    j++;
                    ans += 'L';
                    break;
                case 'R':
                    j--;
                    ans += 'R';
                    break;

                default:
                    break;
            }
        }
        cout<<ans.size()<<endl;
        reverse(ans.begin(), ans.end());
        cout<<ans<<endl;
    }


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
