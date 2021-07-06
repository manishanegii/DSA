#include <iostream>
using namespace std;

int main() {
   int mat[10][10], transpose[10][10], r, c, i, j;
   cin >> r >> c;

   for (int i = 0; i < r; ++i) {
      for (int j = 0; j < c; ++j) {
         cin >> mat[i][j];
      }
   }

   for (int i = 0; i < r; ++i)
      for (int j = 0; j < c; ++j) {
         transpose[j][i] = mat[i][j];
      }

   cout << "\nTranspose: " << endl;
   for (int i = 0; i < c; ++i)
      for (int j = 0; j < r; ++j) {
         cout << " " << transpose[i][j];
         if (j == r - 1)
            cout << endl << endl;
      }
   return 0;
}
