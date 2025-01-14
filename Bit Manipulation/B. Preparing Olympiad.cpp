#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 20;
int a[N];

int32_t main(){
    FASTER;
    
    int n, l, r, x; cin >> n >> l >> r >> x;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    ll ways = 0;
    for(int mask = 0; mask < (1 << n); mask++){
        int mini = INT_MAX, maxi = INT_MIN;
        ll sum = 0;
        for(int i = 0; i < n; i++){
            if(mask >> i & 1){
                sum += a[i];
                mini = min(a[i], mini);
                maxi = max(a[i], maxi);
            }
        }   
        ways += (sum >= l and sum <= r and (maxi - mini) >= x);
    }

    cout << ways << endl;

    return 0;
}
//https://codeforces.com/problemset/problem/550/B
//tc : o(2^n)