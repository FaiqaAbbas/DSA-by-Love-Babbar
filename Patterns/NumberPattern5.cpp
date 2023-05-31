#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter a number ";
  cin >> n;
  int i = 1;
  int j = 1;
  int k=1;
  int space;
  while (i <= n) {
    space=n-i;
    while(space>=1){
      cout<<" ";
      space--;
    }
    j=1;
    while(j<=i){
      cout<<j<<"";
      j++;
    }
    k=i;
    while(k>1){
      cout<<k-1;
      k--;
    }
    cout<<endl;
    i++;
  }
}
