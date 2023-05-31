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
    while (j <= n) {
      cout << j;
      j++;
    }
    cout << endl;
    i++;
  }
}
