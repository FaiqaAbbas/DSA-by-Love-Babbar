#include <iostream>
using namespace std;
int main() {
  int i = 1;
  int j;
  int k;
  int n;
  cout << "n: ";
  cin >> n;
  int space = n;
  for (i = 1; i <= n; i++) {
    for (int s = space; s > i; s--) {
      cout << " ";
    }
    for (j = 1; j <= i; j++) {

      cout << (i - 1) + j << " ";
    }
    for (k = 2; k <= i; k++) {
      cout << (i * 2) - k << " ";
    }
    cout << endl;
  }
}
