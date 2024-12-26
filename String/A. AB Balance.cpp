#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

void solve(){
    string s; cin >> s;
    int len = s.size();

    if(s[0] == s[len - 1]){
        cout << s << endl;
        return;
    }

    s[len-1] = s[0];
    cout << s << endl;
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

// https://codeforces.com/problemset/problem/1606/A