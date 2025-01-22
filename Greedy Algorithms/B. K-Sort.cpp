#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N];

void solve(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    vector<int> v;
    int l = 0, r = 1;
    while(l < n){
        while(r < n and a[r] < a[l]){
            v.push_back(a[l] - a[r]);
            r++;
        }
        l = r; r++;
    }
    
    sort(v.begin(), v.end());
    ll ans = 0, size = v.size();
    for(int i = 0; i < size; i++){
        ll k = (i == 0 ? v[i] : v[i] - v[i-1]);
        ans += 1ll * k * ((size-i) + 1);
    }
    cout << ans << endl;
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

//https://codeforces.com/problemset/problem/1987/B
//o(n)