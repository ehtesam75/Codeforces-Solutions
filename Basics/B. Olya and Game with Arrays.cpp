#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

void solve(){
    int n; cin >> n;
    vector<int> min2;
    int global_min = INT_MAX;

    while(n--){
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        int min1 = *min_element(v.begin(), v.end());
        global_min = min(global_min, min1);
        v.erase(find(v.begin(), v.end(), min1));
        int min_val2 = *min_element(v.begin(), v.end());
        min2.push_back(min_val2);
    }

    cout << (ll)accumulate(min2.begin(), min2.end(), 0ll) + global_min - *min_element(min2.begin(), min2.end()) << endl;
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

//https://codeforces.com/problemset/problem/1859/B