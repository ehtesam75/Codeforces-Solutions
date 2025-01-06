#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N], d[N], more_than_k[N];

int32_t main(){
    FASTER;
    
    int n, k, q; cin >> n >> k >> q;
    for(int i = 0; i < n; i++){
    	int l, r; cin >> l >> r;
        d[l]++; 
        d[r+1]--;
    }

    for(int i = 1; i < N; i++){
        d[i] += d[i-1];
        more_than_k[i] = (d[i] >= k);
    }

    for(int i = 1; i < N; i++){
        more_than_k[i] += more_than_k[i-1];
    }

    while(q--){
    	int a, b; cin >> a >> b;
    	cout << more_than_k[b] - more_than_k[a-1] << endl;
    }

    return 0;
}

//https://codeforces.com/problemset/problem/816/B
//tc: o(q)	//q = 2e5