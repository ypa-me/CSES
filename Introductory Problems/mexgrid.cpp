#include <iostream>
#include <vector>

using namespace std;

int main () {

  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  

  int n;
  cin >> n;





  //mex grid is just a nim table, and a nim table is x XOR y, (where x and y are the coordinates of the table)


  for (int i=0; i< n; ++i){
      for (int j=0; j<n;++j){

        int result = i ^ j;

            cout << result << " ";



      }

      cout << "\n";


  }



  return 0;

  }
