#include <iostream>
using namespace std;
int gcd(int a , int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}
int main (){
    int num1,num2;
    cout<<"Enter two numbers : ";
    cin>>num1>>num2;
    int result = gcd(num1,num2);
    cout<<"gcd of "<<num1<<" and "<<num2<<" is "<<result<<endl;
    return 0;
}