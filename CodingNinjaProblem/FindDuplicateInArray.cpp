#include<iostream>
#include <algorithm>
using namespace std;
int main(){
  int size=7;
  int a[20]={10,13,41,53,1,70,41};
  sort(a, a+size);
  for(int i=0;i<size;i++){
    if(a[i]==a[i+1]){
      cout<<"the duplicate is "<<a[i];
    }
  }
}
