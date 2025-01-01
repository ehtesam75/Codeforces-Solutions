#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N];

void solve(){
    int n; cin >> n;
    char ch; cin >> ch;
    string s; cin >> s;
    int first_g = -1, ch_idx = -1, maxi = INT_MIN;
    bool find_g = 0, find_ch = 1;

    for(int i = 0; i < s.size(); i++){
        if(first_g == -1 and s[i] == 'g') first_g = i;

        if(find_ch == 1 and s[i] == ch){
            find_ch = 0;
            find_g = 1;
            ch_idx = i;
        }

        if(find_g == 1 and s[i] == 'g'){
            find_g = 0;
            find_ch = 1;
            maxi = max(maxi, i - ch_idx);
        }
    }
    // cout << first_g;
    if(find_g == 1) maxi = max(maxi, n - ch_idx + first_g);
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

//https://codeforces.com/problemset/problem/1744/C
//time complexity : O(n)