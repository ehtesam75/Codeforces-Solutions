#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

int cnt[26];

int32_t main(){
    FASTER;
    
    int n; cin >> n;
    string s; cin >> s;
    ll ans = 0;
    for(int i = 0; i < s.size(); i++){
        if(i % 2 == 0){
            cnt[s[i]-'a']++;
        }
        else{
            char ch = tolower(s[i]);
            if(cnt[ch-'a'] > 0) cnt[ch-'a']--;
            else{
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}

//https://codeforces.com/problemset/problem/525/A
//O(s.size())