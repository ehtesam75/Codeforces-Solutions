#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N];

// class custom{
// public:
//     set<int> se;
//     void insert(int x){
//         se.insert(x);
//     }
//     void clear(){
//         se.clear();
//     }

//     int get_max(){
//         return *(--se.end());
//     }
//     int get_min(){
//         return *(se.begin());
//     }
//     int get_diff(){
//         return get_max() - get_min();
//     }
// }ds;

void solve(){
    int n, x; cin >> n >> x;
    // ds.clear();
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    ll cnt = 0;
    // for(int i = 0; i < n; i++){
    //     ds.insert(a[i]);
    //     if(ds.get_diff() > x * 2){
    //         ds.clear();
    //         ds.insert(a[i]);
    //         cnt++;
    //     }
    // }
    int maxi = a[0], mini = a[0];
    for(int i = 1; i < n; i++){
        maxi = max(maxi, a[i]);
        mini = min(mini, a[i]);

        if(maxi - mini > 2 * x){
            cnt++;
            maxi = mini = a[i];
        }
    }
    cout << cnt << endl;
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

//https://codeforces.com/contest/1704/problem/B
//tc : o(n)