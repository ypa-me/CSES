#include <iostream>
#include <string>


using namespace std;

int main (){
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);  

  long long n;
    if (cin >> n) {
        // Print the starting number
        cout << n; 
        
        while (n != 1) {
            if (n % 2 == 0) {
                n /= 2;
            } else {
                n = n * 3 + 1;
            }
            cout << " " << n;
        }
        cout << "\n";
    }

  return 0;

}

 
  
