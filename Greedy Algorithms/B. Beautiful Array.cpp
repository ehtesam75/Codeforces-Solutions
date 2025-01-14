#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N];

void solve(){
    int n, k, b; ll s; cin >> n >> k >> b >> s;
    ll min_sum = 1ll * k * b;
    ll max_sum = 1ll * k * b + (k-1) + 1ll * (n-1) * (k-1);
    if(min_sum > s or max_sum < s){
        cout << -1 << endl;
        return;
    }

    ll left = s; int i = 0;
    while(left > 0 or i < n){
        ll print = 0;
        if(i == 0) print = min(s, 1ll * k * b + (k-1));
        else print = min(left, 1ll * k-1);
        cout << print << ' ';
        left -= print;
        i++;
    }
    cout << endl;
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

//https://codeforces.com/problemset/problem/1715/B
//o(n)