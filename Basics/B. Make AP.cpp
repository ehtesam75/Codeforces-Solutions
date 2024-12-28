#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N];

void solve(){
    int a, b, c; cin >> a >> b >> c;

    bool ans = 0;
    if((2 * b - a) > 0 and (2 * b - a) % c == 0) ans = 1;
    else if((2 * b - c) > 0 and (2 * b - c) % a == 0) ans = 1;
    else if((a + c) % (2 * b) == 0) ans = 1;

    cout << (ans ? "Yes" : "No") << endl;
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

// https://codeforces.com/problemset/problem/1624/B