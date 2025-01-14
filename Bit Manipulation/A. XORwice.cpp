#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N];

void solve(){
    int a, b; cin >> a >> b;
    ll ans = 0;
    // for(int i = 0; i < 32; i++){
    //     int ith_bit_of_a = ((a >> i) & 1);
    //     int ith_bit_of_b = ((b >> i) & 1);
    //     if(ith_bit_of_a != ith_bit_of_b){
    //         ans += (1 << i);
    //     }
    // }

    cout << (a ^ b) << endl;    //same as commented line
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

//https://codeforces.com/problemset/problem/1421/A
//tc: o(1)