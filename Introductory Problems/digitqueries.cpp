#include <iostream>
#include <sstream>
#include <vector>


using namespace std;
int main () {
  ios_base:: sync_with_stdio(false);
  cin.tie(nullptr);



    int n;
    cin >>n;
    vector<long long> nums;

    long long max =0 ;
    for (int i = 0; i<n; ++i){
      long long  k;
      cin >> k;
      nums.push_back(k);
      
      if ( k > max){
        max = k;

      }


      


    }

    //generate a string consisting of incrememtal values to max
      ostringstream oss;  
      for (int i = 1; i <= max; ++i) {
            oss << i; 
            
        }

      // output the value

    for (int i = 0; i<n; ++i){
      long long k;
      k = nums[i];
      cout << oss.str().at(k);
    }





      return 0;

}


