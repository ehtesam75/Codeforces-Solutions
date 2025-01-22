#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 3e5 + 7;
int a[N], b[N];

void solve(){
    int n, m, k; cin >> n >> m >> k;
    for(int i = 0; i < m; i++){
        cin >> a[i];
    }
    ll k_sum = 0;
    vector<bool> ans;
    for(int i = 0; i < k; i++){
        cin >> b[i];
        k_sum += b[i];
    }
    if(n-k > 1){
        for(int i = 0; i < m; i++){
            cout << 0;
        } cout << endl;
        return;
    }

    if(n-k == 0){
        for(int i = 0; i < m; i++){
            cout << 1;
        } cout << endl;
        return;
    }

    int not_know = (1ll * n * (n+1))/2 - k_sum;
    for(int i = 0; i < m; i++){
        if(a[i] == not_know) cout << 1;
        else cout << 0;
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

//https://codeforces.com/problemset/problem/2051/C
//o(n)