#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N], prefix[N];

void solve(){
    int n, k; cin >> n >> k;
    string s; cin >> s;

    int j = 0;
    int current_b = 0, maxi = INT_MIN;
    for(int i = 0; i < n; i++){
        current_b += (s[i] == 'B');
        if(i >= k-1){
            maxi = max(maxi, current_b);
            current_b -= (s[j++] == 'B');
        }
    }

    cout << k - maxi << endl;
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

//https://codeforces.com/problemset/problem/1690/D
//time complexity : O(n)