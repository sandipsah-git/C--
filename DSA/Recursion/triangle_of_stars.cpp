#include <iostream>
using namespace std;
void Triangle(int n){
    if(n<=0){
        return;
    }
    else{
        Triangle(n-1);
    }
    for(int i=0;i<n;i++){
        cout<<"*\t";
    }
    cout<<endl;
}
int main(){
    Triangle(7);
    return 0;
}