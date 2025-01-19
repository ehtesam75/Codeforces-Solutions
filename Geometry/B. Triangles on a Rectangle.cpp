#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

void solve(){
    int w, h; cin >> w >> h;
    ll ans = 0;
    int n = 4;
    while(n--){
        vector<int> v;
        int k; cin >> k;
        while(k--){
            int x; cin >> x;
            v.push_back(x);
        }
        int maximum_distance = *(--v.end()) - *v.begin();
        int multiply = (n == 3 or n == 2) ? h : w;
        ans = max(ans, 1ll * maximum_distance * multiply);
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

// https://codeforces.com/problemset/problem/1620/B
//O(k)