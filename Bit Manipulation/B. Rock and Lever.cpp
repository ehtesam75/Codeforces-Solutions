#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N], set_bits[32];

void solve(){
    int n; cin >> n;
    memset(set_bits, 0, sizeof set_bits);

    for(int i = 0; i < n; i++){
        cin >> a[i];
        int msb = 31 - __builtin_clz(a[i]);
        set_bits[msb]++;
    }

    ll cnt = 0;
    for(int i = 0; i < 32; i++){
        int n = set_bits[i];
        cnt += 1ll * n * (n-1) / 2;
    }

    cout << cnt << endl;
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

//https://codeforces.com/problemset/problem/1420/B
//tc : o(n) per test case