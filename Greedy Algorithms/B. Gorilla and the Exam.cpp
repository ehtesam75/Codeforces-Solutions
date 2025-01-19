#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N];

void solve(){
    int n, k; cin >> n >> k;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }

    vector<int> v;
    for(auto [x, y] : mp) {
        v.push_back(y);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        if(k - v[i] >= 0){
            k -= v[i];
            v[i] = 0;
        }
    }

    ll ans = 0;
    for(auto x : v) {
        if(x > 0) ans++;
    }
    cout << max(1ll, ans) << endl;
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

//https://codeforces.com/problemset/problem/2057/B