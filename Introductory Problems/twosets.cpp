#include <iostream>
#include <vector>


using namespace std;

void divide(long long sum, long long middle, int n){
  // this is a dp problem. fuck i had to learn some dp

  vector<bool>dp (middle +1,false);
  dp[0] = true;

  vector<int>parent(middle+1,0);


  for (int i =1; i<=n; ++i){

    for (int s= middle; s>=i; --s){
      if (!dp[s] && dp[s-1]){
        parent [s]=
      }
    }
  }
}
int main (){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);


  int n;
   cin >> n;

  long long sum=0;

  for (int i=1; i<=n; ++i){
      sum+=i;
  }

  long long middle;
  if (sum%2 == 0){
    middle = sum/2;
    cout << "YES" << "/n";
    
    divide(sum,middle,n);




  }else{
    cout << "NO" << "/n";

  }

  
}
