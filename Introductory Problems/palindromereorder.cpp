#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;
int main () {
  ios_base:: sync_with_stdio(false);
  cin.tie(nullptr);
  

  string input;
  cin >>input;

  int size = input.size();
  
  
  // using hashmap
  unordered_map<char,int>char_counts;
  for ( char c : input){
    char_counts[c]++;
  }

  // calculate the count of the characters with odd frequencies
   // Count characters with odd frequencies
    int odd_count = 0;
    char odd_char = '\0';

  int no_pair =0;
  for ( const auto& pair : char_counts){
    if (pair.second % 2 == 1){
        odd_count++;
        odd_char = pair.first;
    }
  }

  // A palindrome can have at most one character
    // with an odd frequency.
    if (odd_count > 1) {
        cout << "NO SOLUTION\n";
        return 0;
    }




     string return_string(size, ' ');

    int left = 0;
    int right = size - 1;

    // Put pairs on the outside
    for (const auto& pair : char_counts) {
        char c = pair.first;
        int count = pair.second;

        for (int j = 0; j < count / 2; j++) {
            return_string[left++] = c;
            return_string[right--] = c;
        }
    }

    // Put the odd character in the middle
    if (odd_count == 1) {
        return_string[size / 2] = odd_char;
    }

    cout << return_string << '\n';

    return 0;

}
