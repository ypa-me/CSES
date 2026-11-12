#include <bits/stdc++.h>

#define nl '\n'
using namespace std;
// Function to check if valid grid

bool is_valid(int n, int m, int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m;
}


void solve () {

  int n,m;

  cin >> n >> m;

// initialise grid

  vector<string> grid(n);

  for (int i = 0; i <n; i++){
    cin >> grid[i];

  }



  
for (int i = 0; i < n; i++) {

  for (int j= 0; j <m; j++){
    //set disallowed values in a set

    set<char> not_allowed;

      not_allowed.insert(grid[i][j]);  // current cell

      if (is_valid(n, m, i - 1, j))    // top
          not_allowed.insert(grid[i - 1][j]);
      if (is_valid(n, m, i, j - 1))  // left
          not_allowed.insert(grid[i][j - 1]);



       bool filled = false;
            for (int k = 0; k < 4; k++) {
                char ch = 'A' + k;
                if (not_allowed.find(ch) == not_allowed.end()) {
                    grid[i][j] = ch;
                    filled = true;
                    break;
                }
            }
            // if we are unable to fill a cell(NEVER Happens)
            if (!filled) {
                cout << "IMPOSSIBLE" << nl;
                return;
            }

  }


  }


  for (int i = 0; i < n; i++) {
        cout << grid[i] << nl;
    }

}


int main() {
  solve();
  return 0;

}
