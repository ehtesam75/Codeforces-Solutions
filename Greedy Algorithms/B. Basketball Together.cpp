#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N];

int32_t main(){
    FASTER;
    
    int n, d; cin >> n >> d;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a+n, greater<int>());
    int ans = 0;

    int i = 0, left = n;
    while(left > 0 and i < n){
        int need = (d + a[i] -1) / a[i];  //ceil
        need += (d % a[i] == 0);

        if(need <= left) ans++;
        else break;

        left -= need;
        i++;
    }

    cout << ans << endl;

    return 0;
}

//https://codeforces.com/contest/1725/problem/B
//time complexity per test case: O(n)