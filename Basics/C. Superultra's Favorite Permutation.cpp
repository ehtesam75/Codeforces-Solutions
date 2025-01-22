#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

void solve(){
    int n; cin >> n;
    if(n < 5){
        cout << -1 << endl;
        return;
    }
    for(int i = 1; i <= n; i += 2){
        if(i == 5) continue;
        cout << i << ' ';
    }
    cout << 5 << ' ' << 4 << ' ';
    for(int i = 2; i <= n; i += 2){
        if(i == 4) continue;
        cout << i << ' ';
    } cout << endl;
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

//https://codeforces.com/problemset/problem/2037/C
//o(n)