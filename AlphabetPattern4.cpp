#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter a number ";
  cin >> n;
  int i = 1;
  int j = 1;
  char a = 'a';
  while (i <= n) {
    j = 1;
    while (j <= i) {
      cout << a << " ";
      a++;
      j++;
    }
    cout << endl;
    i++;
  }
}
