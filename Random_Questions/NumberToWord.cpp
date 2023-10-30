#include <iostream>
using namespace std;
string ones[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
string teens[] = {"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
string tens[] = {"","","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};

string NumberToWord(int num){
    if(num > 999){
        return "Number out of range.";
    }
    
}
int main(){
    int number ;
    cout<<"Enter the number between 1 to 999";
    cin>>number;
    string word = NumberToWord(number);
    cout<<"The result is : "<<word;
    return 0;
}