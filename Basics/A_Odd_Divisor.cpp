#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

bool power_of_two(ll n){
    return (n & (n-1)) == 0;
}

void solve(){
    ll n; cin >> n;
    if(power_of_two(n)){
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

//https://codeforces.com/problemset/problem/1475/A