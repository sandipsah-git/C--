 #include <iostream>
 using namespace std;
 
 int factorial(int n){
 	//base case
 	if(n==0)
 		return 1;
	// recursive relation
	 int smallprob = factorial(n-1);
	 int bigprob = n*smallprob;
	 return bigprob;
	 //oR direct, return n*factorial(n-1);
 }
 int main(){
 	int n;
 	cout<<"Enter for finding the factorial value of n: "<<endl;
 	cin>>n;
 	int ans = factorial(n);
 	cout<<"Result is : "<<ans<<endl;
 	return 0;
 }
