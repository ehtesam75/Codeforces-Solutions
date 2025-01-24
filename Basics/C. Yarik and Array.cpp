#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N];

bool same_parity_consec(int idx){
    return abs(a[idx]) % 2 == abs(a[idx-1]) % 2;
}

void solve(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    ll max_sum = a[0], sum = a[0];
    for(int i = 1; i < n; i++){
        if(sum + a[i] < a[i] or same_parity_consec(i)){
            sum = a[i];
        }
        else sum += a[i];
        max_sum = max(max_sum, sum);
    }
    cout << max_sum << endl;
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

//https://codeforces.com/problemset/problem/1899/C
//O(n)