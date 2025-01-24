#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N];
ll n, c; 

bool f(ll w){
    ll total = 0;
    for(int i = 0; i < n; i++){
        ll x = a[i] + 2ll * w;
        total += 1ll * x * x;   //we could have used __int128 as data type
        if(total >= c) return 1;    //in that case i wouldn't had to early return
    }
    return 0;
}

void solve(){
    cin >> n >> c;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    ll l = 0, r = 1e9, ans = 0;
    while(l <= r){
        ll mid = l + (r-l)/2;
        if(f(mid)){
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
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

//https://codeforces.com/problemset/problem/1850/E
//o(nlogn)