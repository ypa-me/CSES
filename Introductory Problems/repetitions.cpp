
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string input;
    cin >> input;
    
    int max_streak = 1;
    int current_streak = 1;
    
    for (size_t i = 1; i < input.length(); i++) {
        if (input[i] == input[i - 1]) {
            current_streak++;
        } else {
            max_streak = max(max_streak, current_streak);
            current_streak = 1; // Reset streak for the new character
        }
    }
    
    max_streak = max(max_streak, current_streak);
    
    cout << max_streak << "\n";
    
    return 0;
}

