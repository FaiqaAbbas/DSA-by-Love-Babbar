#include <iostream>
using namespace std;

int main() {
  int n;
  int i = 1;
  int j;
  cout << "Enter a number : ";
  cin >> n;
  while (i <n) {
    j = 0;
    while (j <i) {
        cout << i+j  << " ";
        j++;   
    }
    cout << endl;
    i++;
  }
}
