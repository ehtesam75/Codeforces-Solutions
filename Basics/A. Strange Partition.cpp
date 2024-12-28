#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N];
int x;

ll ceil_val(ll n){
    return (n + x -1)/x;
}

void solve(){
    int n; cin >> n >> x;
    ll maxi = 0;
    ll sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        maxi += ceil_val(a[i]);
        sum += a[i];
    }

    cout << ceil_val(sum) << ' ' << maxi << endl;
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

//https://codeforces.com/problemset/problem/1471/A