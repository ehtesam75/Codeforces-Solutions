#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
ll suffix[N];

void solve(){
    int n; cin >> n;
    vector<pair<int, int>> v(n);
    memset(suffix, 0, sizeof suffix);
    for(int i = 0; i < n; i++){
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(v.begin(), v.end(), greater<pair<int, int>>());
    for(auto [x,y] : v) {
        cout << x << ' ';
    } cout << endl;
    return;
    for(int i = n-1; i >= 0; i--){
        suffix[i] = suffix[i+1] + v[i].first;
    }
    // for(int i = 0; i < n; i++){
    //     cout << suffix[i] << ' ';
    // } cout << endl;

    vector<int> ans(n);
    ans[v[0].second] = n-1;
    // cout << v[0].second << endl;
    // cout << string(20, '-') << endl;
    for(int i = 1; i < n; i++){
        int idx = v[i].second;
        int prev_idx = v[i-1].second;
        // cout << prev_idx << endl;
        if(suffix[i] >= v[i-1].first){
            ans[idx] = ans[prev_idx];
        }
        else ans[idx] = n - i - 1;
    }

    for(auto x : ans) {
        cout << x << ' ';
    } cout << endl;
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

//https://codeforces.com/problemset/problem/1904/B
//O(n) per test case