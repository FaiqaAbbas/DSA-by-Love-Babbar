#include <iostream>
using namespace std;
int main() {
  int n = 5;
  int mask = 0;
  int result = 0;
  int num=n;
  while (n != 0) {
    mask = (mask << 1 | 1);
    n=n>>1;
  }
  result = (~num & mask);
  cout<<result;
}
