#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

void solve(){
    ll n; cin >> n;
    int cnt = 0;

    ll temp = n;
    bool found_zero = 0, found_five = 0, found_two = 0, found_seven = 0;

    while(temp > 0){
        int last_digit = temp % 10;
        cnt++;
        temp /= 10;
        if(last_digit == 0 and found_zero == 0){
            found_zero = 1;
            continue;
        }
        else if(last_digit == 5 and found_five == 0 and found_zero == 0){
            found_five = 1;
            continue;
        }

        if(found_zero){
            if(last_digit == 0 or last_digit == 5){
                cout << cnt - 2 << endl;
                return;
            }
        }
        if(found_five){
            if(last_digit == 2 or last_digit == 7){
                cout << cnt - 2 << endl;
                return;
            }
        }
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

//https://codeforces.com/problemset/problem/1593/B