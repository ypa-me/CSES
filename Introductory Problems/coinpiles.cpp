#include <iostream>


using namespace std;

void solve(){
 int a;
 int b;

 cin >> a;
 cin >> b;

 // can empty if a=b is a multiple of 3 ??
 // and neither pile is more than twice the size of the other, because we are removing at the ratio of 2:1 or vice versa

 int sum = a +b;
 bool ratio = true;

 if ( b > 2*a || a > 2*b){
   ratio = false;
  }

 if ( sum % 3 == 0 && ratio  ) {
   cout << "YES" << endl;
 }
 else{
   cout << "NO" << endl;
 }

}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--){
    solve();
  }

  return 0;
}
