#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(x) cout << #x << ": " << x << endl;
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N];

void solve(){
    int n; ll x, y; cin >> n >> x >> y;
    ll sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    // debug(sum);
    sort(a, a+n);
    ll ans = 0;
    for(int i = 0; i < n; i++){
        // auto low = lower_bound(a, a+i+1, ((sum-a[i]-y)));
        // auto high = upper_bound(a, a+i+1, (sum-a[i]-x));
        auto low = lower_bound(a+i+1, a+n, ((sum-a[i]-y)));
        auto high = upper_bound(a+i+1, a+n, (sum-a[i]-x));
        // cout << *low << ' ' << *high << endl;
        ans += high - low;
        // cout << string(20, '-') << endl;
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

//https://codeforces.com/contest/2051/problem/D
//o(nlogn)