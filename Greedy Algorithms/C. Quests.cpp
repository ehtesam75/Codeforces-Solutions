#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;

void solve(){
    int n, k; cin >> n >> k;
    vector<pair<int, int>> v(n+1, {0, 0});
    
    for(int i = 1; i <= n; i++){
        cin >> v[i].first;
    }

    for(int i = 1; i <= n; i++){
        cin >> v[i].second;
    }

    int max_b = INT_MIN;
    ll ans = INT_MIN, sum_a = 0;

    for(int i = 1; i <= min(n, k); i++){
        sum_a += v[i].first;
        max_b = max(max_b, v[i].second);
        ll sum = sum_a + 1ll * (k - i) * max_b;
        ans = max(ans, sum);
    }

    cout << ans << endl;
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

//https://codeforces.com/problemset/problem/1914/C
//tc : o(n) per test case