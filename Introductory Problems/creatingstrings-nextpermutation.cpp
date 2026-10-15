#include <bits/stdc++.h>
using namespace std;



// htis uses next permutation which does exactly what the problem says



int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  
  string s;
  cin>> s;
  sort(s.begin(),s.end());

  vector<string> res;

  do {
    res.push_back(s);
  } while (next_permutation(s.begin(),s.end()));


// next permutation skips duplicates for repeated characters
// do while puts sorted string first in res array
// next permuation returns true/false if next permuation is available

      cout <<res.size() << endl;
      for (auto& t : res) cout << t << endl;




  return 0;

}
