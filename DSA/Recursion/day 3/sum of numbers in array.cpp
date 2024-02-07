#include <iostream>
using namespace std;
int getSum (int *arr,int size){
	//base case
	if (size == 0){
		return 0;
	}
	if (size == 1){
		return arr[0];
	}
	int remainingPart = getSum(arr+1,size-1);
	int sum = arr[0]+remainingPart;
	return sum;
}
int main(){
	int arr[5] = {1,2,3,5,6};
	int size = 5;
//    int size;
//    cout<<"Enter the value for size :";
//    cin>>size;
//    
//    int arr[size];
//    cout<<"enter the elements of array ";
//    for(int i=0;i<size;i++){
//    	cin>>arr[i];
//	}
	int sum = getSum(arr,size);
	cout<<"sum is "<<sum;
	return 0;
}
