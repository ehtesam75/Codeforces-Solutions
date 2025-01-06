#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cout << #x << ": " << x << endl;
#define endl '\n'

const int N = 2e5 + 7;
int a[N]; ll d[N];

int32_t main(){
    FASTER;
    
    int n, q; cin >> n >> q;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    while(q--){
        int l, r; cin >> l >> r;
        d[l]++;
        d[r+1]--;
    }

    for(int i = 1; i <= n; i++){
        d[i] += d[i-1];
    }

    sort(d+1, d+n+1, greater<int>());
    sort(a+1, a+n+1, greater<int>());

    ll sum = 0;
    for(int i = 1; i <= n; i++){
        sum += 1ll * a[i] * d[i];
    }

    cout << sum << endl;

    return 0;
}

//https://codeforces.com/problemset/problem/276/C
//tc: O(nlogn)