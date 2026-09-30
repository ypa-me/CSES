// C++ program to generate bit patterns from 0 to 2^N-1
#include <bits/stdc++.h>
using namespace std;

vector<string> graycode(int n) {
    
    // Base Case 
    if (n == 1) {
        return {"0", "1"};
    }
  
    // Calculate the strings for n-1 length 
    vector<string> prevGrayCode = graycode(n - 1);
      
    // Reverse the previous Gray Code for n-1 length
    vector<string> reversedPrevGrayCode = prevGrayCode;
    reverse(reversedPrevGrayCode.begin(), reversedPrevGrayCode.end());
  
    int prevSize = prevGrayCode.size();
    int index = 0;
    while (index < prevSize) {
        
        // Prepend the character 0 in previous Gray Codes
        string appendedZero = "0" + prevGrayCode[index];
   
        // Prepend the character 1 in Reversed previous Gray Codes
        prevGrayCode[index] = "1" + reversedPrevGrayCode[index];
        prevGrayCode.push_back(appendedZero);
        index++;
    }
    return prevGrayCode;
}

int main() {
    int n ;
    cin >>n;
    vector<string> res = graycode(n);
    for (auto code : res)
        cout << code << "\n";
    return 0;
}
