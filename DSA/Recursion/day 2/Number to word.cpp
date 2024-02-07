#include<iostream>
using namespace std;
void sayWord(int n ,string arr[]){
    // base case
    if(n==0)
    return ;
    //processing
    int digit = n%10;
     n = n/10;
    sayWord(n,arr);
    cout<<arr[digit]<<" ";
}
int main(){
    int n;
    cout<<"enter the numbers : ";
    cin>>n;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    sayWord(n,arr);
    return 0;
}
