#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 1005;
int player[N];

int32_t main(){
    FASTER;
    
    int n, m, k; cin >> n >> m >> k;
    for(int i = 1; i <= m + 1; i++){
        cin >> player[i];
    }

    ll frend = 0;
    for(int i = 1; i <= m; i++){
        int differ = 0;
        for(int j = 0; j < 20; j++){
            int jth_bit_curr_player = (player[i] >> j & 1);
            int jth_bit_fedor = (player[m+1] >> j & 1);
            if(jth_bit_fedor != jth_bit_curr_player) differ++; 
        }
        if(differ <= k) frend++;
    }

    cout << frend << endl;

    return 0;
}

//https://codeforces.com/problemset/problem/467/B
//tc : o(m)