#include <iostream>
using namespace std;

int main() {
  int n;
  int i = 1;
  int j = 1;
  cout << "Enter a number : ";
  cin >> n;
  while (i <= n) {
    j = n;
    while (j >= 1) {
      cout << j;
      j--;
    }
    cout << endl;
    i++;
  }
}
