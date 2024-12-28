#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N];

void solve(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    if(n % 2 == 0){
        cout << 2 << endl;
        int x = 2;
        while(x--){
          cout << 1 << ' ' << n << endl;
        }
    }

    else{
      cout << 4 << endl;
      int x = 2;
      while(x--){
        cout << 1 << ' ' << n-1 << endl;
      }

      x = 2;
      while(x--){
        cout << n-1 << ' ' << n << endl;
      }
    }

}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

//https://codeforces.com/problemset/problem/1869/A