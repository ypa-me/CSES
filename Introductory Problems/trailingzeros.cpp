#include<iostream>



using namespace std;





// need only calculate the pairs of numbers 2,5
// no need to find all the factors (like before). numbers of 2 would always exceed number of 5 in N! (Legendre's formula, the number of factor p in N! is greater or equal the number of factor q, where p<q)





int solve(int N)
{
    if (N == 0) {
        return 0;
    }
    return N / 5 + solve(N / 5);
}


int main (){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >>n;

  cout << solve(n) <<endl;

  return 0;

}
