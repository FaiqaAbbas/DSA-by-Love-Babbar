#include <iostream>
#include <cmath>
using namespace std;

int main() {
  bool binaryOfNumber[32] ={};
  bool onesCompliment[32]={};
  bool twosCompliment[32]={};
  int n;
  int ans = 0;
  cout << "Enter a negative number to print its binary: ";
  cin >> n;
  n = abs(n); // to remove the negative sign if the user has entered a negative number
  cout << "\n" << n << " in binary  is : ";
  bool bit;
  int totalNumberOfBits=0;
  int bIndex = 31;
  for(int i = 1; n > 0; i++) {
    bit = n & 1;
    ans = ans + (bit * pow(10, i));
    n = n >> 1;
    if(bit == 0){
        binaryOfNumber[bIndex] = false;
    }
    else{
        binaryOfNumber[bIndex] = true;
    }
    bIndex--;
  }
	totalNumberOfBits=32-bIndex;
  for(int i = 0; i < 32; i++) {
    cout << binaryOfNumber[i];
  }
  cout<<endl;
  cout << "\nOne's complement: ";
  for(int i = 0; i < 32; i++) {
    if(binaryOfNumber[i] == false) {
      onesCompliment[i] = true;
    }
    else {
      onesCompliment[i] = false;
    }
  }
  for(int i=0;i<=31;i++){
  	cout<<onesCompliment[i];
  }
  cout<<" (Flip 1->0 and 0->1)"<<endl;
  //assign twosCompliment=onesComplimemnt so that we can have 11111 for twosCompliment array
  for(int i=0;i<31;i++){
  	twosCompliment[i]=onesCompliment[i];
  }
  bool carry=1;
  cout << "\nTwo's Complement: ";
  
    for (int i = 31; i >=bIndex; i--) {
		if(onesCompliment[i]==1){
			if(carry==1){
				twosCompliment[i]=0;
				carry=1;
			}
			             
		}                
		else{            
			if(carry==1){
				twosCompliment[i]=1;
				carry=0;
			}
		}	
    }
  
  	for(int i=0;i<=31;i++){
  		cout<<twosCompliment[i];
  	}  
    cout<<endl;
   	
  
  
 
  return 0;
}

