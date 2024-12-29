#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N];

void solve(){
    string s; cin >> s;
    int len = s.size();
    ll zero = 0, one = 0;

    for(int i = 0; i < len; i++){
        zero += (s[i] == '0');
        one += (s[i] == '1');    
    }

    ll cost = 0;

    for(int i = 0; i < len; i++){
        if(s[i] == '0'){
            if(one > 0){
                one--;
            }
            else{
                cost += zero;
                break;
            }
        }

        else{
            if(zero > 0){
                zero--;
            }
            else{
                cost += one;
                break;
            }
        }
    }

    cout << cost << endl;
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

//https://codeforces.com/problemset/problem/1913/B