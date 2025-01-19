/*
divisor : prime factorization
    Prime Factorization is the process of breaking down a positive integer into a product of prime numbers
    For any integer n>1, there exists a unique prime factorization: 
    n = a^p1 * b^p2 * c^p3
    i. e n = 84
    84 can be represented as = 2^3 * 3^1 * 7^1 (84/2 => 42/2 => 21/3(next prime num after 2) =>7 (already a prime! so will stop))

    say x = 7^2 * 13^3 + 19^1
            {7^0, 7^1, 7^2}, {13^0, 13^1, 13^2, 13^3}, {19^0, 19^1}
            we can take any number of number from each of this three set 
            and then x will be always divided by their multiplicaton 

    total number of divisor of x is : (2+1) * (3+1) * (1+1);    //look at the above set, u'll understand..its just counting
    cuz we know if a a number's prime factorization is = a^x * b ^ y
    then no. of divisor is = (x +1) * (y+1)

    - we will try to find a number that has EXACTLY 4 divisor (cuz this will make the number smaller)
    - output a will be either p^3 and pq; p and q are prime (cuz if there is 2 prime factor with pow 1 then total divisor will be 4)
    - in case 1 all divisor : 1, p, p^2, p^3
        we have to find smallest prime p, that >= d+1
    - in case 2 all divisor : 1, p, q, pq
        we have to find samllest prime p , that >= d+1
        we have to find smallest prime q, that >= p + d 

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

bool is_prime(int n){
    //O(sqrt(n))
    //O(sqrt(d)) = ~10^2 times
    if(n == 1) return 0;
    for(int i = 2; 1ll*i*i <= n; i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int next_prime(int x){
    //samllest prime that is >= x
    //tc : ln(n) ; cuz we know avg distance between nth and (n+1)th prime is ~ln(n)
    //here its ln(d); loge(d); loge(1e4) = ~10
    //so this loop will run at 10times at wrost case
    while(!is_prime(x)){
        x++;
    }
    return x;
}

void solve(){
    int d; cin >> d;
    
    int p = next_prime(d+1);
    int q = next_prime(p+d);
    cout << min(1ll*p*p*p, 1ll*p*q) << endl;;
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
    return 0;
}

//total tc: o(t * gap_between_prime * sqrt(n))
//10^3 * 10 * 10^2
//10^6