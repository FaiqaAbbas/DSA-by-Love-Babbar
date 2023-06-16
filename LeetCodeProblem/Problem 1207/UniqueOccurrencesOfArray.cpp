#include <iostream>
using namespace std;
int main() {
  int size = 5;
  int ar[5] = {1,1,2,2,3};
  int count = 0;
  int counter[size];
  int i = 0;
  int k = 0;
  int flag = 0;
  int flag1 = 0;
  for (i = 0; i < size; i++) {
    for (int l = 0; l < i; l++) {
      if (ar[i] == ar[l]) {

        flag = 1;
        break;
      } else {
        flag = 0;
      }
    }
    if (flag != 1) {
      for (int j = 0; j < size; j++) {
        if (ar[i] == ar[j]) {
          count++;
        }
      }
      for (int m = 0; m < k; m++) {
        if (count == counter[m]) {
          flag1 = 1;
          break;
        }
      }
      if (flag1 == 1) {
        break;
      }
      counter[k] = count;
      k++;
      count = 0;
    }
  }
  if (flag1 == 1) {
    cout << "Not unique";
  } else {
    cout << "unique";
  }
}

