#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter a number ";
  cin >> n;
  int i = 1;
  int j = 0;
  while (i <= n) {           
    j = 0;                           
    while (j < i) {
      cout << i - j<<" ";
      j++;
    }
    cout << endl;
    i++;
  }
}
