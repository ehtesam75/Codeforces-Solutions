#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 15;
int a[N][N];

void solve(){
    int n, m; cin >> n >> m;
    int minus = 0, mini = INT_MAX;
    ll sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
            sum += abs(a[i][j]);
            minus += a[i][j] < 0;
            mini = min(abs(a[i][j]), mini);
        }
    }
    // cout << mini << endl;
    if(minus % 2 == 0) cout << sum << endl;
    else cout << sum - 2 * mini << endl;
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

//https://codeforces.com/problemset/problem/1447/B