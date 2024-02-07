#include <iostream>
using namespace std;

void reachHome(int src, int dest){
	cout<<"source "<<src <<"   destination "<<dest<<endl;
	//base class
	if (src ==dest){
		cout<<"\nreached to the destination."<<endl;
		return ;
	}
	//processing
	src ++;
	//recursive call
	reachHome(src,dest);
}
int main(){
	int dest=10;
	int src = 1;
	reachHome(src,dest);
	return 0;
}
