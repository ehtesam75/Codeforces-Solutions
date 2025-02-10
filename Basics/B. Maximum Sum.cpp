#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N];
ll prefix[N];

void solve(){
    int n, k; cin >> n >> k;
    ll sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];       
    }
    sort(a, a+n);
    for(int i = 0; i < n; i++){
        prefix[i+1] = prefix[i] + a[i];
    }

    ll maxi = 0;
    for(int i = 0; i <= k; i++){
        maxi = max(maxi, prefix[n-i] - prefix[2 * (k-i)]);
    }
    cout << maxi << endl;
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

//https://codeforces.com/problemset/problem/1832/B
//o(n)