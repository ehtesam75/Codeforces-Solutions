#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 1000;
int a[N];

void solve(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 1; i < n-1; i++){
        if(a[i] > a[i-1] and a[i] > a[i+1]){
            cout << "Yes" << endl;
            cout << i << ' ' << i + 1 << ' ' << i + 2 << endl;
            return;
        }
    }

    cout << "No" << endl;
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

//https://codeforces.com/problemset/problem/1380/A
//TC: O(n) for each test case