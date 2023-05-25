#include <iostream>
using namespace std;

int main() {
  int n;
  int i = 1;
  int k=1;
  int j = 1;
  cout << "Enter a number : ";
  cin >> n;
  while (i <= n) {
    j=1;
    while(j<=n){
      cout<<k<<" ";
      k++;
      j++;
    }
    cout<<endl;
    i++;
  }
}
