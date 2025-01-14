#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7, mod = 1e9 + 7;
int a[N];

void solve(){
    int n, k; cin >> n >> k;
    ll sum = 1;
    for(int i = 0; i < k; i++){
        sum = 1ll * sum * n % mod;
    }

    cout << sum << endl;
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

//https://codeforces.com/problemset/problem/1514/B
//tc : o(k) per test case; k = 20; 