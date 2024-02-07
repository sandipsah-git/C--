#include <iostream>
using namespace std;
int stairs(int n){
	//base class
	if(n<0){       //oR    // if (n==0){    oR,   // if (n <= 1) {
		return 0;          //	return 1;         //  return 1;    // Base case: 0 or 1 step
	}                      // }                   //   }
	if(n==0){              // if(n==1){
		return 1;          //	return 1;
	}                      // }
	int ans = stairs(n-1)+stairs(n-2);
	return ans;
}
int main (){
	int n;
	cout<<"Enter the value of n : ";
	cin>>n;
	stairs(n);
	cout << "Number of distinct ways to climb to the " << n << "th step: " <<stairs(n);
	return 0;
}
