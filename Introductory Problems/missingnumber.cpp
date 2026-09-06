#include <iostream>
#include <unordered_set>

using namespace std;


int main (){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  unordered_set<int> Set;

  int n;
  cin >>n;

  for (int i = 0; i<n-1;++i){
    int temp;
    cin >> temp;

    Set.insert(temp);
  }

  for (int i = 1; i<=n;++i){
   if (Set.count(i) == 0){
      cout << i;
     return 0;
   } 
  }
  
}
