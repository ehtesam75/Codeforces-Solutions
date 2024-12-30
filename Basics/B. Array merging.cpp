#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N], b[N];

void solve(){
    int n; cin >> n;
    map<int, int> mp1;
    int cosec = 0, curr = a[0];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        int prev = curr;
        curr = a[i];

        if(prev == curr){
            cosec++;
        }
        else cosec = 1;
        mp1[a[i]] = max(mp1[a[i]], cosec);
    }

    map<int, int> mp2;
    cosec = 0, curr = b[0];
    for(int i = 0; i < n; i++){
        cin >> b[i];
        int prev = curr;
        curr = b[i];

        if(prev == curr){
            cosec++;
        }
        else cosec = 1;
        mp2[b[i]] = max(mp2[b[i]], cosec);
    }

    int maxi = INT_MIN;

    for(int i = 1; i <= 2 * n; i++){
        maxi = max(maxi, mp1[i] + mp2[i]);
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

//https://codeforces.com/problemset/problem/1831/B
//Time Complexity per test case: O(n log n)