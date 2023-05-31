/*Decimal to Binary Reverse Needed */
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
    ans=ans+(bit*pow(10,i));
    n=n>>1;
  }
  cout<<ans;
}
