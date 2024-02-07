#include <iostream>
using namespace std;

void print(int n){
	//base class 
	if(n==0){
		return ;
	}   //process
		cout<<n<<endl;
		//recursive relation
		print(n-1);
}
int main(){
	int n;
	cout<<"Enter the value of n: ";
	cin>>n;
	cout<<endl;
	print(n);
	return 0;
}
