	#include <iostream>
	#include <math.h>
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
	  int bIndex = 31;
	  for(int i = 1; n > 0; i++) {
	    bit = n & 1;
	    ans = ans + (bit * pow(10, i));
	    n = n >> 1;
	    binaryOfNumber[bIndex] = bit; 
	    bIndex--;
	  }
		//To print Binary of the number
	 for(int i = 0; i < 32; i++) {
	    cout << binaryOfNumber[i];
	  }
	  cout<<endl;
		//Finding One's Compliment
	  cout << "\nOne's complement:  ";
	  for(int i = 0; i < 32; i++) {
	    if(binaryOfNumber[i] == false) {
	      onesCompliment[i] = true;
	    }
	    else {
	      onesCompliment[i] = false;
	    }
	  }
		//To print One's Compliment
	  for(int i=0;i<=31;i++){
	  	cout<<onesCompliment[i];
	  }
	  cout<<" (Flip 1->0 and 0->1)"<<endl;
	  cout<<" Two's Compliment: ";
	
	 	//Finding Two's Compliment 
		int carry=1;
		for(int i=31;i>=0;i--){
			if(onesCompliment[i]==1){
				if(carry==1){
					twosCompliment[i]=0;
					carry=1;
				}
				else{
					twosCompliment[i]=1;
	
				}
			}
			else{
				if(carry==1){
					twosCompliment[i]=1;
					carry=0;
				}
				else{
				
				}
			}
		}
	
			//To print Two's Compliment of the number
		for(int i=0;i<32;i++){
			cout<<twosCompliment[i];
		}
			
	  
	  
	 
	  return 0;
	
		}
	}
