#include <iostream>
#include <math.h>
using namespace std;
void printPower(int arr[], int size) {
  int flag = 0;
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < 32; j++) {
      if (arr[i] == pow(2, j)) {
        flag = 1;
        break;
      }
    
    }
    if (flag == 1) {
      cout << arr[i] << " is a power of 2" << endl;
    } else {
      cout << arr[i] << " is not a power of 2" << endl;
    }
    flag=0;
  }
}
void inputArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << " a [" << i << "] = ";
    cin >> arr[i];
  }
}

int main() {
  int arr[5];
  inputArray(arr, 5);
  printPower(arr, 5);
}
