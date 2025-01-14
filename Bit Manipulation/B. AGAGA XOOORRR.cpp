#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2005;
int a[N], prefix[N];

int get_xor(int l, int r){
    return prefix[r] ^ prefix[l-1];
}

void solve(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    for(int i = 1; i <= n; i++){
        prefix[i] = prefix[i-1] ^ a[i];
    }

    bool ok = false;
    for(int i = 1; i < n; i++){
        int x = get_xor(1, i);
        int y = get_xor(i+1, n);
        if(x == y) ok = true;
    }

    for(int i = 1; i <= n; i++){
        for(int j = i+1; j < n; j++){
            int x = get_xor(1, i);
            int y = get_xor(i+1, j);
            int z = get_xor(j+1, n);
            if(x == y and y == z){
                ok = true;
            }
        }
    }
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

//https://codeforces.com/contest/1516/problem/B
//tc : o(n^2)