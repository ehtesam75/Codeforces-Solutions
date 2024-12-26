#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N];

void solve(){
    int n; cin >> n;
    ll ones = 0, zeros = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        ones += (a[i] == 1);
        zeros += (a[i] == 0);
    }

    if(!ones){
        cout << 0 << endl;
        return;
    }

    ll power = 1;
    for(int i = 0; i < zeros; i++){
        power *= 2;
    }

    cout << power * ones << endl;
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

//https://codeforces.com/problemset/problem/1582/B