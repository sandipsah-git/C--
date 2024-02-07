#include <iostream>
using namespace std;

int function(int n){
	//base class
	if (n==0){
		return 1;
	}
	//recursive relation
	int smallprob = function(n-1);
	int bigprob = 2 * smallprob;
	return bigprob;
	//oR direct, return 2*function(n-1);
}
int main(){
	int n;
	cout<<"Enter the power value of 2 : "<<endl;
	cin>>n;
	int ans = function(n);
	cout<<"The result is : "<<ans<<endl;
	return 0;
}

