#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter Binary of a number "; 
	cin>>n;
	int dig;
	int ans=0;
	for(int i=0;n>0;i++){
		dig=n%10;
		ans=ans+(dig*pow(2,i));
		n=n/10;
	}
	cout<<endl;
	cout<<"the decimal of "<<n<<" is "<<ans;
}

