#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 1e5 + 7;
string s[N]; int mask[N];

int32_t main(){
    FASTER;
    
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s[i];
        vector<int> freq(26, 0);
        for(auto c : s[i]) {
            freq[c - 'a']++;
        }
        for(int j = 0; j < 26; j++){
            if(freq[j] % 2 == 1){
                mask[i] += (1 << j);
            }
        }
    }

    ll ans = 0;
    map<int, int> cnt;
    for(int i = 0; i < n; i++){
        // for(int j = i+1; j < n; j++){
        //     int res = mask[i] ^ mask[j];
        //     if(res == 0 or (res & res-1) == 0){ // this denotes 1 set bit in res; power of 2
        //         //builtin_popcount(res) == 1
        //         cnt++;
        //     }
        // }

        //mask[i] ^ mask[j] = 0
        //mask[j] = mask[i]
        ans += cnt[mask[i]];

        //mask[i] ^ mask[j] = 2^k (as 2's power has exactly one set bit in binaray rep) 
        //mask[j] = mask[i] ^ (1 << k)
        //(for some 0 <= k < 26)

        for(int k = 0; k < 26; k++){
            ans += cnt[mask[i] ^ (1 << k)];
        }

        cnt[mask[i]]++;
    }

    cout << ans << endl;
    return 0;
}

//https://codeforces.com/problemset/problem/1045/I
//o(nlogn)