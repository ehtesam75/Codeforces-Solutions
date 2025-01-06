#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 1e6 + 7;
int d[N];

bool is_prime(int n){
    if(n == 1) return 0;
    for(int i = 2; 1ll * i * i <= n; i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

void solve(){
    int a, b; cin >> a >> b;
    ll cnt = 0;
    for(int i = a; i <= b; i++){
        if(is_prime(d[i])) cnt++;
    }
    cout << cnt << endl;
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;

    for(int i = 1; i < N; i++){
        for(int j = i; j < N; j += i){
            d[j] += i;
        }
    }
    
    while(tc--){
        solve();
    }

    return 0;
}