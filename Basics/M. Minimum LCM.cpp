#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N];

void solve(){
    int n; cin >> n;
    int idx = 0;
    int a = 1;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            a = n / i;
            break;
        }
    }

    cout << a << ' ' << n - a << endl;
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

//https://codeforces.com/problemset/problem/1765/M
//time complexity : O(sqrt(n))