#include <iostream>
using namespace std;

int main() {
  int n;
  int i = 1;
  cout << "Enter a number : " << endl;
  cin >> n;
  while (i <= n) {
    int j = 1;
    while (j <= n) {
      cout << i;
      j++;
    }
    cout << endl;
    i++;
  }
}
