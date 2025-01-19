#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N];

void solve(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    vector<int> p(n+1);
    for(int i = 1; i <= n; i++){
        p[i] = i;
    }

    int l = 1, r = 1;
    while(l <= n){
        while(r < n and a[r] == a[r+1]){
            r++;
        }
        if(l == r){
            cout << -1 << endl;
            return;
        }
        rotate(p.begin()+l, p.begin()+r, p.begin()+r+1);
        l = r + 1;
        r++;
    }

    for(int i = 1; i <= n; i++){
        cout << p[i] << ' ';
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

//https://codeforces.com/problemset/problem/1691/B
//O(n)