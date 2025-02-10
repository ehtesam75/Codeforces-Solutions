#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7, mod = 1e9 + 7;
int a[N], b[N];

void solve(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    sort(b, b+n);
    sort(a, a+n);
    vector<pair<int, int>> v(n);
    int l = 0, r = 0, i = 0;
    while(l < n){
        while(r < n and a[r] <= b[l]){
            r++;
        }
        v[l] = {b[l], n-r};
        l++;
    }

    int cnt = 0;
    ll ans = 1;
    for(int i = n-1; i >= 0; i--){
        ans = 1ll * ans * (v[i].second - cnt++) % mod;
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

//https://codeforces.com/problemset/problem/1827/A
//o(nlogn)