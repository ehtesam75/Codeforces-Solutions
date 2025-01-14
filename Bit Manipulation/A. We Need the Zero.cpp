#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N];

void solve(){
    int n; cin >> n;
    vector<int> ones(30, 0);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        for(int j = 0; j < 30; j++){
            ones[j] += (a[i] >> j & 1);  
        }
    }

    ll x = 0;
    for(int i = 0; i < 30; i++){
        int zeros = n - ones[i];
        if(ones[i] % 2 == 1 and zeros % 2 == 1){
            cout << -1 << endl;
            return;
        }
        else if(ones[i] % 2 == 1 and zeros % 2 == 0){
            x += (1 << i);
        }
    }

    cout << x << endl;
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

//https://codeforces.com/problemset/problem/1805/A
//tc : o (n)