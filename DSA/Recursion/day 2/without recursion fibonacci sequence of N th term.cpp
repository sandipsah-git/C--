#include <iostream>
using namespace std;
int fib(int n){
	//base class
//	if(n==0){
//		return 0;
//	}
//	if(n==1){
//		return 1;
//	}
	//else {
	int a = 0,b=1,c;
	cout << a << " " << b << " ";
	for(int i=2;i<=n;i++){ // i<n for user want to count 0 as 1
		c = a + b;
		cout<< c<<" ";
		    a = b;
		    b = c;
	}
//} 
}
int main(){
	int n;
	cout<<"Enter the value of n: ";
	cin>>n;
	fib(n);
	return 0;
}
