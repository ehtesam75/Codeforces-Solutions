#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 55;
char a[N][N];

bool one_found(char ch){
    return (ch == 'f' or ch == 'a' or ch == 'c' or ch == 'e');
}

int32_t main(){
    FASTER;
    
    int n, m; cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    ll cnt = 0;
    set<char> se;
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < m-1; j++){
            if(one_found(a[i][j]) and one_found(a[i][j+1]) and one_found(a[i+1][j]) and one_found(a[i+1][j+1])){
                se.insert(a[i][j]);
                se.insert(a[i][j+1]);
                se.insert(a[i+1][j]);
                se.insert(a[i+1][j+1]);
                cnt += (se.size() == 4);
                se.clear();
            }
        }
    }

    cout << cnt << endl;

    return 0;
}

//https://codeforces.com/problemset/problem/549/A
//tc: o(n * m)