#include <iostream>
#include <vector>

using namespace std;
int main(){
  int n;
  cin >>n;

  vector<long long>arr(n);

  long long count =0;
  long long diff;
  for (int i=0; i<n;i++){
    cin >> arr[i];

  }

  for (int i=1; i<n;i++){
      // finding the difference for more efficiency
      if (arr[i]< arr[i-1]){
        diff = arr[i-1] - arr[i];
        arr[i]+= diff;
        count+=diff;
      }
  }
  
  cout << count;

  return 0;

  
  

}
