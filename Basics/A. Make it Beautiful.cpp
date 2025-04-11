#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N];

void solve(){
    int n; cin >> n;
    bool all_equal = 1;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(i != 0){
            if(a[i] != a[0]) all_equal = 0;
        }
    }

    if(all_equal){
        cout << "No" << endl;
        return;
    }

    cout << "Yes" << endl;
    sort(a, a+n, greater<int>());
    cout << a[0] << ' ' << a[n-1] << ' ';
    for(int i = 1; i < n-1; i++){
        cout << a[i] << ' ';
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

//https://codeforces.com/problemset/problem/1783/A
//o(n)