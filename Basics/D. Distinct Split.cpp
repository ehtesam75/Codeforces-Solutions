#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N], suffix[N], prefix[N];
bool present[26];

void solve(){
    int n; cin >> n;
    string s; cin >> s;

    memset(present, 0, sizeof(present));

    for(int i = 0; i < n; i++){
        if(i == 0) prefix[i] = 1;
        else prefix[i] = prefix[i-1] + (present[s[i] - 'a'] == 0);
        present[s[i] - 'a'] = 1;
    }

    memset(present, 0, sizeof(present));

    for(int i = n-1; i >= 0; i--){
        if(i == n-1) suffix[i] = 1;
        else suffix[i] = suffix[i+1] + (present[s[i] - 'a'] == 0);
        present[s[i] - 'a'] = 1;
    }

    int maxi = INT_MIN;
    for(int i = 0; i < n-1; i++){
        maxi = max(maxi, prefix[i] + suffix[i+1]);
    }

    cout << maxi << endl;

}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

//https://codeforces.com/problemset/problem/1791/D
//time complexity : O(n) //n = length of the string