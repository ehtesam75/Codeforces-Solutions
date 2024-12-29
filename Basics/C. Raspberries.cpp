#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N];

void solve(){
    int n, k; cin >> n >> k;
    int even = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        even += (a[i] % 2 == 0);
    }

    int ans = INT_MAX;
    for(int i = 0; i < n; i++){
        ans = min(ans, (k - a[i] % k));
        if(a[i] % k == 0) ans = 0;
    }

    if(k == 4){
        int sub_ans = max(0, 2 - even);
        ans = min(ans, sub_ans);
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

//https://codeforces.com/problemset/problem/1883/C