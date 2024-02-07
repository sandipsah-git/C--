//finding pallindrom
#include <iostream>
using namespace std;
bool pallindrom(string str,int i , int j){
	//base case
	if (i>j)
	return true;
	if (str[i]!=str[j]){
		return false;
	}
	else {
		//recursive call
		return pallindrom(str,i+1,j-1);
	}
}
int main(){
	string name = "bookkoob";
	bool ans = pallindrom (name,0,name.length()-1);
	if(ans){
		cout<<"it is pallindrom."<<endl;
	}
	else{
		cout<<"it is not pallindrom."<<endl;
	}
	
	return 0;
}
