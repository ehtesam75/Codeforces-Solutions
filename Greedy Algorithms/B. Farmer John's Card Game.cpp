#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2005;
int a[N][N];

void solve(){
    int n, m; cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        sort(a[i], a[i]+m);
    }


    for(int i = 0; i < n; i++){
        for(int j = 1; j < m; j++){
            if(a[i][j] != a[i][j-1] + n){
                cout << -1 << endl;
                return;
            }
        }
    }

    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++){
        v.push_back({a[i][0], i+1});
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++){
        cout << v[i].second << ' ';
    } cout << endl; 
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

//https://codeforces.com/problemset/problem/2060/B
//o(n*m*logn)