#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N];

void solve(){
    int n, k; cin >> n >> k;
    for(int i = 1; i <= n*k; i++){
        cin >> a[i];
    }

    ll ans = 0;

    if(n == 1){
      for(int i = 1; i <= n*k; i++){
          ans += a[i];
      }
      cout << ans << endl;
      return;
    }

    if(n == 2){
      for(int i = 1; i <= n*k; i +=2){
        ans += a[i];
      }
      cout << ans << endl;
      return;
    }

    int jump = n/2 + 1; //jump = number of element from median to last element
    // cout << (n - jump) * k << endl;
    for(int i = (n - jump) * k + 1; i <= n*k; i += jump){
      ans += a[i];
    }

    cout << ans << endl;
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

//https://codeforces.com/problemset/problem/1440/B