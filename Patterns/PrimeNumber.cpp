#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter a number : " << endl;
  cin >> n;
  int i = 2;
  int sum = 0;
  int flag = 0;
  if (n == 2) {
    cout << "The number is prime";
  } else if (n < 2) {
    cout << "Prime numbers start form 2";
  } else {
    while (i < n) {
      if (n % i == 0) {
        cout << "The number is not Prime";
        flag = 1;
        break;
      }
      i++;
    }
    if (flag != 1) {
      cout << "The number is Prime";
    }
  }
}
