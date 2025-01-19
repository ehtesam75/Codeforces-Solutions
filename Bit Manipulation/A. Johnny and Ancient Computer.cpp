#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

void solve(){
    ll a, b; cin >> a >> b;
    int last_set_bit_a = __builtin_ctzll(a);
    int last_set_bit_b = __builtin_ctzll(b);

    int l = last_set_bit_a, r = last_set_bit_b;
    while(l <= 31 or r <= 31){
        int lth_bit_a = (a >> l & 1);
        int rth_bit_b = (b >> r & 1);

        if(lth_bit_a != rth_bit_b){
            cout << -1 << endl;
            return;
        }
        l++; r++;
    }
    
    int need = abs(last_set_bit_a - last_set_bit_b);
    cout << (need+3-1) / 3 << endl;
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

//https://codeforces.com/problemset/problem/1362/A