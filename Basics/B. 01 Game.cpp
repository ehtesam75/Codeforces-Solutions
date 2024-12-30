#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N];

void solve(){
    string s; cin >> s;
    ll ones = 0, zeros = 0;
    for(int i = 0; i < s.size(); i++){
        ones += (s[i] == '1');
        zeros += (s[i] == '0');
    }

    if(min(ones, zeros) % 2 == 0){
        cout << "NET" << endl;
    }

    else{
        cout << "DA" << endl;
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

//https://codeforces.com/problemset/problem/1373/B
// Time complexity: O(size of string) for each test case