#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N];

void solve(){
    int x, y; cin >> x >> y;
    int diff = x + 1 - y;
    if(diff >= 0 and diff % 9 == 0){
        cout << "Yes" << endl;
    }
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

//https://codeforces.com/problemset/problem/2067/A
//o(1)