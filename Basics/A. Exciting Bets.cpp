#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N];

void solve(){
    ll a, b; cin >> a >> b;
    if(abs(a-b) == 0){
        cout << 0 << ' ' << 0 << endl;
        return;
    }
    else if(abs(a-b) == 1){
        cout << 1 << ' ' << 0 << endl;
        return;
    }
    else{
        ll diff = abs(a-b);
        ll mod = a % diff;
        cout << diff << ' ' << min(mod, abs(diff - mod)) << endl;
    }
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

//https://codeforces.com/problemset/problem/1543/A