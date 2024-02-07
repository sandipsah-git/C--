#include <iostream>
using namespace std;
void reverse(string &str,int i ,int j){
	cout<<"call recieved for " <<str<<endl;
	//base case
	if (i>j)
	return ;
	
	swap(str[i++],str[j--]);
	
	//recursive call
	reverse(str,i,j);
}
int main (){
	string name = "sandip";
	reverse(name,0,name.length()-1);
	cout<<endl;
    cout<<"the result is "<<name<<endl;
	return 0;
}
