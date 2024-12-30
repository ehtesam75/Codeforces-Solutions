#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 3e5 + 7;
int a[N];

void solve(){
    int n, k; cin >> n >> k;
    vector<pair<int, int>> ans;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
        a[i] = a[i] % k;
        if(a[i] == 0) a[i] = k;
        ans.push_back({a[i], i});
    }

    sort(ans.begin(), ans.end(), [](pair<int, int> a, pair<int, int> b){
        if(a.first == b.first) return a.second < b.second;
        else return a.first > b.first;
    });

    for(auto i : ans) {
        cout << i.second << ' ';
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

//https://codeforces.com/problemset/problem/1849/B