#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter a number ";
  cin >> n;
  int i = 1;
  int j = 1;
  char a;
  while (i <= n) {
    j = 1;
    while (j <= i) {
      a = 'a' + i + j - 2;//This is just like doing a++ to change from 'a' to 'b'
      cout << a << " ";
      j++;
    }
    cout << endl;
    i++;
  }
}
