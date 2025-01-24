#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 1e5 + 7;
int a[3][N];

void solve(){
    int n, x; cin >> n >> x;
    int total = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < n; j++){
            if((x | a[i][j]) == x) total |= a[i][j];
            else break;      
        }
    }

    if(total == x) cout << "Yes" << endl;
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

//https://codeforces.com/contest/1842/problem/B
//o(n)