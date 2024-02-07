#include <iostream>
using namespace std;

int fib(int n){
	if(n==0){
	return 0;
     }
    if(n==1){
	return 1;
    }
    else{
    	return fib(n-1)+fib(n-2);
	}
}
int main(){
	int n;
	cout<<"Enter Nth position for find value : ";
	cin>>n;
	fib(n);
	cout<<"result is "<<fib(n); //fib(n-1) when user want to count 0 as 1
	return 0;
}
