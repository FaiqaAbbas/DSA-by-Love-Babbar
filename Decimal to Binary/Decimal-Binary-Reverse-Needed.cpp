/*Decimal to Binary Reverse Needed. 
It will print the bit sequence in reverse order
 so we will need to reverse it. */
#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int n;
  cout << "n: ";
  cin >> n;
  int ans = 0;
  int bit;
  for(int i=0;n>0;i++){
    bit=n&1;
   	cout<<bit;
    n=n>>1;
  }
  cout<<ans;
}
