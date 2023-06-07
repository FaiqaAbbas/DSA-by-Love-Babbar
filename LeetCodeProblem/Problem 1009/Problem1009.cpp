#include <iostream>
using namespace std;
int main() {
  int n;
  cout<<"Find Binary of Compliment of : ";
  cin>>n;
  int mask = 0;
  int result = 0;
  int num=n;
  while (n != 0) {
    mask = (mask << 1 | 1);
    n=n>>1;
  }
  result = (~num & mask);
  cout<<"The binary of complement of "<<num<<" is "<<result;
}
