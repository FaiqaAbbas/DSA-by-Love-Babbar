#include<iostream>
#include<math.h>
using namespace std;
class Solution {
public:
    int reverse(int x) {
            int min=pow(-2,31);
            int max=(pow(2,31)-1);
            int temp;
            int ans=0;
            int dig;
            for(;x!=0;){
                dig=x%10;
                if(ans<min/10 || ans > max/10){
                       return 0;
                }
                ans=dig+(ans*10);
                x=x/10;
            }
            return ans;
    }
};
int main(){
	Solution *sol=new Solution();
	int n;
	cout<<"enter n ";
	cin >>n;
	cout<<sol->reverse(n);
	
	return 0;
}


