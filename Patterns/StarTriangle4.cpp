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
    space = i - 1;
    while (space) {
      cout << " ";
      space--;
    }
    j = 1;
    while (j <= n - i + 1) {
      cout << "*";
      j++;
    }
    cout << endl;
    i++;
  }
}
