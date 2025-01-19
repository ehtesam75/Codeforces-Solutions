#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

int xor_0_to_n(int n){
    if(n % 4 == 0) return n;
    else if(n % 4 == 1) return 1;
    else if(n % 4 == 2) return n + 1;
    else return 0;
}

void solve(){
    int a, b; cin >> a >> b;
    int xor_res = xor_0_to_n(a-1);

    int ans = -1;
    if(xor_res == b){
        cout << a << endl;
        return;
    }

    int another_elment = xor_res ^ b;
    if(another_elment != a){
        cout << a + 1 << endl;
    }
    else{
        cout << a + 2 << endl;
    }
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

//https://codeforces.com/problemset/problem/1567/B
//O(1) per test case