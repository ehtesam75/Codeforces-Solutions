#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N];

void solve(){
    int n, x, y; cin >> n >> x >> y;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    map<pair<int, int>, int> mp;
    ll cnt = 0;

    for(int i = 0; i < n; i++){
        int curr_element = a[i] % x;
        int to_find = (-a[i] % x + x) %x;

        int curr_element_2 = a[i] % y;
        int to_find_2 = a[i] % y;
        cnt += mp[{to_find, to_find_2}];

        mp[{curr_element, curr_element_2}]++;
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

//https://codeforces.com/problemset/problem/1931/D
//tc : o(n)