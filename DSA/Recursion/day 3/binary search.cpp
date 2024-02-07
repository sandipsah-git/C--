#include <iostream> // binary search -- in this, array must be in sorted
#include <algorithm>
using namespace std;
bool getnumber(int arr[],int s,int e,int k){
	// base case
	if(s>e){
		return false;
	}
	// mid value
	int mid = s+(e-s)/2;  // (s+e)/2
	// proccess
	if(arr[mid]==k){
		return true;
	}
	if(arr[mid]<k){
		return getnumber(arr,mid+1,e,k);
	}
	else{
		return getnumber(arr,s,mid-1,k);
	}
}
int main(){
	int arr[] = {4,5,3,2,1,0,7,6,5,4};
	int size = sizeof(arr)/sizeof(arr[0]);
	int key = 2;
	sort(arr,arr+size); // if array is not sorted then meke sorted it first  
	bool ans = getnumber(arr,0,size-1,key);
	if(ans){
		cout<<key<<" is found in this array. ";
	}
	else{
		cout<<key<<" is not found in this array.";
	}
	return 0;
}
