#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter a number ";
  cin >> n;
  int i = 1;
  int j = 1;

  while (i <= n) {
    char s = 'a' + (n - i);
    j = 1;
    while (j <= i) {
      cout << s << " ";
      s = s + 1;
      j++;
    }
    cout << endl;
    i++;
  }
}
