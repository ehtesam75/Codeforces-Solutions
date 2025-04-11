#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 105;
int a[N];

void solve(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    bool check = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n and j != i; j++){
            if(gcd(a[i], a[j]) <= 2){
                check = 1;
                break;
            }
        }
    }

    if(check) cout << "Yes" << endl;
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

//https://codeforces.com/problemset/problem/1789/A
//o(n^2 * log(10^6))