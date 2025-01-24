#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N];
int n, x;

bool f(int h){
    ll add = 0;
    for(int i = 0; i < n; i++){
        add += max(h - a[i], 0);
    }
    return add <= x;
}

void solve(){
    cin >> n >> x;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int l = 1, r = 2e9, ans = 0;
    while(l <= r){
        int mid = l + (r-l)/2;
        if(f(mid)) ans = mid, l = mid + 1;
        else r = mid - 1;
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

//https://codeforces.com/problemset/problem/1873/E
//o(nlogn)