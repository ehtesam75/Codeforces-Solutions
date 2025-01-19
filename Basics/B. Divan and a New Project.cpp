#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

void solve(){
    int n; cin >> n;
    vector<pair<int, int>> v(n);    //visit_count, building_no
    for(int i = 0; i < n; i++){
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(v.begin(), v.end(), greater<pair<int, int>>());  
    vector<pair<int, int>> plus, minus; //visit_count, building_no
    for(int i = 0; i < n; i++){
        if(i & 1) minus.push_back({v[i].first, v[i].second});
        else plus.push_back({v[i].first, v[i].second});
    }

    // for(auto [a, b] : plus) {
    //     cout << a << ' ' << b << endl;
    // }
    ll ans = 0;
    vector<pair<int, int>> res;
    for(int i = 0; i < minus.size(); i++){
        ans += 2ll * (i+1) * minus[i].first;
        res.push_back({minus[i].second, -(i+1)});
    }
    for(int i = 0; i < plus.size(); i++){
        ans += 2ll * (i+1) * plus[i].first;
        res.push_back({plus[i].second, (i+1)});
    }

    cout << ans << endl;
    cout << 0 << ' ';
    sort(res.begin(), res.end());
    for(auto [curr_idx, cordinate] : res) {
        cout << cordinate << ' ';
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

//https://codeforces.com/problemset/problem/1614/B
//tc : (ologn)