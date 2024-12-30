#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N];

void solve(){
    int n, k, q; cin >> n >> k >> q;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int consec = 0;
    ll ans = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > q){
            int sub = consec - k;
            if(sub >= 0){
                ans += 1ll * sub * (sub + 1)/2;
                ans += sub + 1;
            }
            consec = 0;
        }
        else{
            consec++;
        }
    }

    if(consec > 0){
        int sub = consec - k;
        if(sub >= 0){
            ans += 1ll * sub * (sub + 1)/2;
            ans += sub + 1;
        }
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

//https://codeforces.com/contest/1840/problem/C