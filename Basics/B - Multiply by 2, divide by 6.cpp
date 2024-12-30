#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N];

void solve(){
    int n; cin >> n;
    int cnt_two = 0, cnt_three = 0;

    while(n % 2 == 0){
        n /= 2;
        cnt_two++;
    }

    while(n % 3 == 0){
        n /= 3;
        cnt_three++;
    }

    if(n != 1){ //n has other prime factor than 2 or 3
        cout << -1 << endl;
        return;
    }

    if(cnt_two <= cnt_three)
        cout << cnt_three - cnt_two + cnt_three << endl;
    else
        cout << -1 << endl;
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

//https://codeforces.com/contest/1374/problem/B
// Time complexity: O(log n) for each test case