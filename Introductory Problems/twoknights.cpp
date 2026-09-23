#include <iostream>
#include <cmath>

using namespace std;

//this is a combinatorics/math problem
//recall the comnination formula, this is what gives the total value of comninations 




void solve(long k){
    long totalWays = k*k * (k*k-1)/2;

    //The number of ways two knights can attack each other in a 2 X 3 block is 2 and number of ways two knights can attack each other in a 3 X 2 block is 2
    //We just need to count the number of 2x3 and 3x2 rectangles in the k x k square


    //  In a K X K chessboard, the 2*3 blocks can be arranged  in (K-1) rows (starting from the first row till the (K-1)-th row), and there are (K-2) ways to position them in columns (starting from the first column till the (K-2)-th column) which gives us (K-1)*(K-2) ways to place a 2 X 3 block in a K X K chessboard. Similarly, we can place a 3 X 2 block in (K - 1) * (K - 2) ways. 

    // So, the total number of ways two knights can attack each other in a K X K chessboard will be sum of 2 * number of 2 X 3 blocks and 2 * number of 3 X 2 blocks, which is 4 * (K - 1) * (K - 2). It is every important to note that no 2 ways of attacking are same in the derived formula.

    long attackways = 4 * (k-1) * (k-2);

    cout << totalWays - attackways << "\n";


}






int main (){
  int n;
  cin >> n;
  
  long long size;
  for (int i = 1; i<=n; i++){
    
    solve(i);
    

  }
}
