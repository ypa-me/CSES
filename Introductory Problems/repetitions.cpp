#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);


  string input;
  cin >> input;

  unordered_map<char,int>freq;

  for (char i : input){
    freq[i]++;
  }


//counting the max number occurence

int maxCount = 0;

for (const auto& [c,count]:freq){
  if (count >maxCount){
    maxCount = count;
  }

  cout << maxCount;
  return 0;
}
}

