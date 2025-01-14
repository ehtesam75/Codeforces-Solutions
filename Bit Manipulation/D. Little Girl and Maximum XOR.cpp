#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

int32_t main(){
    FASTER;
    
    ll l, r; cin >> l >> r;
    int l_msb = 63 - __builtin_clzll(l);
    int r_msb = 63 - __builtin_clzll(r);

    ll ans = 0;
    bool differ = 0;
    for(int i = r_msb; i >= 0; i--){
        int l_bit = (l >> i & 1);
        int r_bit = (r >> i & 1);
        if(differ == 0 and l_bit != r_bit){
            differ = 1;
        }
        if(differ) ans += (1ll << i);
    }

    cout << ans << endl;

    return 0;
}

//https://codeforces.com/problemset/problem/276/D
//o(1)