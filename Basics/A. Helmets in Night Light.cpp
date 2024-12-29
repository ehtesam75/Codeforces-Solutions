#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N], b[N];

void solve(){
    int n, p; cin >> n >> p;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    map<int, ll> mp;

    for(int i = 0; i < n; i++){
        if(b[i] < p){
            mp[b[i]] += a[i];
        }
    }

    ll need = n - 1;
    ll cost = p;

    for(auto i : mp) {
        cost += 1ll * i.first * min(i.second, need);
        need -= min(i.second, need);
    }

    cost += 1ll * need * p;

    cout << cost << endl;
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

//https://codeforces.com/problemset/problem/1876/A