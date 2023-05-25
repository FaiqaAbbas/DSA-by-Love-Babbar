#include <iostream>
using namespace std;

int main() {
  int n;
  int i = 1;
  int j = 1;
  cout << "Enter a number : ";
  cin >> n;
  while (i <= n) {
    j = 1;
    while (j <= i) {
      cout << "*";
      j++;
    }
    cout << endl;
    i++;
  }
}
