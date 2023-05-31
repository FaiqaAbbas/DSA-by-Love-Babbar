#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "n: ";
  cin >> n;
  int j;
  int k;
  int l;
  for (int i = 1; i <= n; i++) {
    j = 1;
    while (j <= n-i+1) {
      cout << j;
      j++;
    }
    k = 1;
    while (k < i * 2 - 1) {
      cout << "*";
      k++;
    }
    for (l = n - i + 1; l >= 1; l--) {
      cout << l;
    }
    cout << endl;
  }
}
