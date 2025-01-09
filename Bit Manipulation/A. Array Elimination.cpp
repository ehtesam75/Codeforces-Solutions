#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N];

void solve(){
    int n; cin >> n;
    vector cnt_set_bit(30, 0);

    for(int i = 0; i < n; i++){
        cin >> a[i];
        for(int j = 0; j < 30; j++){
            cnt_set_bit[j] += (a[i] >> j & 1);
        }
    }

    for(int k = 1; k <= n; k++){
        bool check = 1;
        for(int i = 0; i < 30; i++){
            if(cnt_set_bit[i] % k != 0){
                check = 0;
                break;
            }
        }
        if(check) cout << k << ' ';
    }
    cout << endl;
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

//https://codeforces.com/problemset/problem/1601/A
//tc: o(n)