#include <iostream>
using namespace std;
// Arrays to store words for ones, tens, and teens places
string ones[] = {"","one","two","three","four","five","six","seven","eight","nine"};
string teens[] = {"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
string tens[] = {"","","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};

string NumberToWord(int num){
    if(num < 0 || num > 999){
        return "Number out of range.";
    }
    if(num == 0){
        return "Zero";
    }
    string result;  // initializing the result string 
    
    // handling hundred place
    if(num >=100 && num <=999){
        result += ones[num/100] + " hundred ";
        num = num % 100;
    }
    // handling tens place
    if(num >= 10 && num <=19){
        result +=  teens[num%10];
        return result;
    }
    else if(num >=20 && num <= 99){
        result += tens[num/10];
        num = num % 10;
        if(num>0){
            result = result + " ";
        }
    }
    // handling ones place 
    if(num >=1 && num <=9){
        result += ones[num];
    }
    return result;
    
}
int main(){ 
    int number ;
    cout<<"Enter the number between 1 to 999 : ";
    cin>>number;
    string word = NumberToWord(number);
    cout<<"The result is : "<<word;
    return 0;
}