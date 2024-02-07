#include <iostream>
using namespace std;
bool isShorted(int arr[],int size){
	//base case
	if (size == 0 || size == 1)
	return true;
	if (arr[0]>arr[1]){
		return false;
	}	
	bool remainingPart = isShorted(arr+1,size-1);
	return remainingPart;
}
int main (){
	int arr[5] = {1,3,5,6,8};
	int size = 5;
	bool ans = isShorted(arr,size);
	if (ans){
		cout<<"array is shorted.";
	}
	else{
		cout<<"arry is not shorted.";
	}
	return 0;
}
