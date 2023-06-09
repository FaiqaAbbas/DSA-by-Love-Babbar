#include <algorithm>
#include <iostream>
using namespace std;
void arrayInput(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << "arr[" << i << "]=";
    cin >> arr[i];
  }
}
void arrayOutput(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}
void alternateSwap(int arr[], int size) {
  for (int i = 0; i + 1 < size; i += 2) {
    // if(i==size-1){
    //   break;
    // }
    swap(arr[i], arr[i + 1]);
  }
  arrayOutput(arr, size);
}
int main() {
  int a = 0;
  int size;
  cout << "Size of Array : ";
  cin >> size;
  int arr[size];
  arrayInput(arr, size);
  alternateSwap(arr, size);
}
