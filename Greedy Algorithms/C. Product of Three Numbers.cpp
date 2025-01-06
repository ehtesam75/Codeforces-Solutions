#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

int smallest_divisor(int n, int already_got, int already_got_2){
	deque<int> de;
	for(int i = 1; 1ll * i * i <= n; i++){
		if(n % i == 0){
			if(i * i != n) de.push_front(n/i);
		}
	}
	for(int i = 2; 1ll * i * i <= n; i++){
		if(n % i == 0 and i != already_got and i != already_got_2){
			return i;
		}
	}
	for(auto x : de) {
	    if(n % x == 0 and x != already_got and x != already_got_2){
	    	return x;
	    }
	}
	return -1;
}

void solve(){
    int n; cin >> n;
    int a, b, c; 
    a = smallest_divisor(n, 1, 1);
    if(a == -1){
    	cout << "No" << endl;
    	return;
    }

    b = smallest_divisor(n/a, a, 1);
    if(b == -1){
    	cout << "No" << endl;
    	return;
    }

    c = n / (a*b);
    if(c == a or c == b or c == 1){
    	cout << "No" << endl;
    	return;
    }

    cout << "Yes" << endl;
    cout << a << ' ' << b << ' ' << c << endl;
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

//https://codeforces.com/problemset/problem/1294/C
// tc: O(tc * sqrt(n))