#include<iostream>

using namespace std;
int main() {
  int a, b;
  cout << "enter your rows :";
  cin >> a;
  cout << "enter your coloums: ";
  cin >> b;
  int element_1[a][b];
  int element_2[a][b];
  int c[a][b];
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < b; j++) {
      cout << "elements of matrix 1: ";
      cin >> element_1[i][j];
    }
  }
  cout << endl;
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < b; j++) {
      cout << "elements of matrix 2: ";
      cin >> element_2[i][j];
    }
  }
  for (int k = 0; k < a; k++) {
    for (int l = 0; l < b; l++)
      c[k][l] = element_1[k][l] - element_2[k][l];
  }
  for (int m = 0; m < a; m++) {
    for (int n = 0; n < b; n++) {
      cout << c[m][n] << " ";
    }
    cout << endl;
  }

  return 0;
}