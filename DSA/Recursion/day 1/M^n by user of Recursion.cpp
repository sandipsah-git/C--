 #include <iostream>
 using namespace std;
 
 int power(int m,int n){
 	//base class 
 	if(n==0){
 		return 1;
	 }
	 //recursive relation
	 int smallprob = power(m,n-1);
	 int bigprob = m*smallprob;
	 return bigprob;
	 //oR direct, return m*power(m,n-1);
 }
 int main(){
 	int m,n;
 	cout<<"Enter the base value for m: "<<endl;
 	cin>>m;
 	cout<<"Enter the exponent value for n: "<<endl;
 	cin>>n;
 	int ans = power(m,n);
 	cout<<"The result is : "<<ans<<endl;
 	return 0;
 }
