#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter a number ";
  cin >> n;
  int i = 1;
  int j = 1;
  int space;
  while (i <= n) {
    space = n - i;
    while (space) {
      cout << " ";
      space--;
    }
    j = 1;
    while (j <= i) {
      cout << "*";
      j++;
    }
    cout << endl;
    i++;
  }
}
