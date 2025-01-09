#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N];

int32_t main(){
    FASTER;
    
    int n, k; cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    ll mini = INT_MAX;
    int p = 1, ans = -1;
    ll sum = 0;
    for(int i = 1; i <= n; i++){
        sum += a[i];
        if(i >= k){
            if(sum < mini){
                mini = sum;
                ans = p;
            }
            sum -= a[p];
            p++;
        }
    }

    cout << ans << endl;

    return 0;
}

//https://codeforces.com/problemset/problem/363/B
//o(n)