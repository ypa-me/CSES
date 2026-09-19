#include <iostream>
#include <vector>

using namespace std;
int main (){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  

  int n ;
  cin >>n;
  //trying parity approach
 
  vector<int> even;
  vector<int> odd;
  vector<int> permute;


  // only 3 and 2 do not have enough space to provide a solution, 1 does provide a solution.
  if (n==3 || n==2 ){
    cout << "NO SOLUTION";
  }else{

  // even and odd parity will never have a space of 1. it will always be more
  for (int i = 1; i<=n;i++){
    if ( i %2 == 0){
      even.push_back(i);
    }else{
      odd.push_back(i);
    }

  }
  

  permute = even;

  // simply merging the two parities gives a right answer
  permute.insert(permute.end(),odd.begin(),odd.end());

  for (int i = 0; i<n;++i){
    cout << permute[i] << ' ';
  }

  }


  

  return 0;

  

}
