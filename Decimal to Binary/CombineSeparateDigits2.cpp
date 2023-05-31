#include <iostream>
#include <math.h>

using namespace std;
int main() {
  int size = 0;
  cout << "Enter how many separate digits you want to show together : ";
  cin >> size;
  int a[size];
  int n;
  for(int i=0;i<size;i++){
    cout << "n "<<i<<" : ";
    cin >> n;
    a[i] = n;
  }
  int ans = 0;
  for (int i = 0; i <size; i++) {
    ans = (ans*10)+ a[i];
  }
  cout << ans;
}
