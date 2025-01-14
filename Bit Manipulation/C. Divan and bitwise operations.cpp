/*

total sum of xors of all possible subsequence of a 0/1 array:
for this, we will go through all possible subsequence and check if there's odd number of 1 present
if yes then 1 will add to the total sum (because xor is 1 in this case)
so total sum is the number of subsequence where 1 is present odd number of time

*how many subsequence from five one (11111)
2 x 2 x 2 x 2 x 2 = 2 ^ 5   (either we will take 1 or not take it)

*how many subsequence where 1 is present odd number of time (all elements are 1)
imagine we are at _ (last stage)
2 x 2 x 2 x 2 x _ ; 
imagine, if we already took odd number of 1, then in the last stage we surely won't take 1 (cuz already we have odd number of 1)..so our choice is 1 here
or if we already took even number of 1, then we must take 1...so number of choice here is 1
observation : whether we take 1 or not in the last stage depands on our previous action, whether we took 1 even or odd number of times
so there are (2^4) * 1 => 2^4 => 2^(number of one-1) subsequence where 1 is present odd number of time (all element are 1)

*now how many subsequence are there, where 1 is present odd number of time (all elements either 0 or 1; i.e 010101111)?
how many ways zeros can be taken ? : 2^(number of zero) // zeros count doesn't matter;  
cuz we will calculate sum and only when we have odd number of 1, it will contribute to the sum

how many ways ones can be taken ? : 2^(number of one-1)
so total ways : 2^(number of one-1) * 2^(number of zero)
                => 2^(one-1) * 2^(n-one)
                => 2^(n-1)  [when number of one > 0]

so number of subsequence where 1 is present odd number of time is 2^(n-1)
interesting observation : it doesn't even depand on number of 1

expection case : if number of 1 in 0/1 array is zero, then the ans is zero
otherwise 2^(n-1)

so answer to the original quesiton, total sum of xors of all possible subsequence of a 0/1 array
is 2^(n-1) [when number of one > 0]
is 0 [when number of one = 0]




** So total sum of xors of all possible subsequence of a NORMAL array? **
say the array is {22, 4, 20, 2}
            1 0 1 1 0
            0 0 1 1 0
            1 0 1 0 0
            0 0 0 1 0
            ---------
 2^(n-1) * (1 0 1 1 0)

all bits are idepandant so we can perform operation bit by bit
**if there's a single 1 in column it will contribute 2^(n-1) to the sum (i.e for 1st, 3rd, 4th col)
it not, it will contribute 0 (i.e for 2nd and 5th col)
it bascially OR operation!!
so total sum of xors of all possible subsequence of a NORMAL array is : 
2^(n-1) * (OR operation of all elements of the array)

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int mod = 1e9 + 7;

void solve(){
    int n, m; cin >> n >> m;
    int total_or = 0;
    for(int i = 0; i < m; i++){
        int l, r, x; cin >> l >> r >> x;
        total_or |= x;
    }

    ll ans = 1;
    for(int i = 1; i < n; i++){
        ans = 1ll * ans * 2 % mod;
    }

    ans = 1ll * ans * total_or % mod;
    cout << ans << endl;
    return;
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

// https://codeforces.com/problemset/problem/1614/C
//o(n+m)