#include <iostream>
#include <cmath>
#define ll long long
using namespace std;
// this is very simple
// 2^n is the number of bits a n spaces can form



// fast exponentiation uses bitwise operations, with expo, instead of normal int operations
ll MOD = 1e9 + 7;

// Fast Exponentiation
ll power(ll base, ll expo) {
    ll ans = 1;
    while(expo) {
        if(expo & 1LL) {
            ans = (ans * base) % MOD;
        }
        base = (base * base) % MOD;
        expo >>= 1LL;
    }
    return ans;
}



int main() {
  ios_base::sync_with_stdio(false);
cin.tie(nullptr);

  ll n;
  cin >>n;
 cout << power(2LL, n) << endl;
 return 0;
    
}

