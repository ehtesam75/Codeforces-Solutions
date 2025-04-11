#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 1005;
int a[N], prefix[N], suffix[N];

void solve(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    prefix[0] = (a[0] == 2);
    for(int i = 1; i < n; i++){
        prefix[i] = prefix[i-1] + (a[i] == 2);
    }

    suffix[n-1] = (a[n-1] == 2);
    for(int i = n-2; i >= 0; i--){
        suffix[i] = suffix[i+1] + (a[i] == 2);
    }

    for(int i = 0; i < n-1; i++){
        if(prefix[i] == suffix[i+1]){
            cout << i+1 << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

//https://codeforces.com/contest/1788/problem/A
//o(n)