#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int rows = 5;
  int cols = 5;

  vector<vector<int>> matrix(rows, vector<int>(cols));

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cin >> matrix[i][j];
    }
  }

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (matrix[i][j] == 1) {
        cout << abs(2 - i) + abs(2 - j);
      }
    }
  }

  return 0;
}