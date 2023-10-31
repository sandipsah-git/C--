#include <iostream>
#include <string>
using namespace std;
// Arrays to store words for ones, tens, and teens places
string ones[] = {"","one","two","three","four","five","six","seven","eight","nine"};
string teens[] = {"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
string tens[] = {"","ten","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};

string NumberToWord(int num){
    if(num < 0 || num > 999999){
        return "Number out of range.";
    }
    if(num == 0){
        return "Zero";
    }
    string result;  // initializing the result string 
    
    // handling lakh place 
    if(num >= 100000 && num <= 999999){
        result += ones[num/100000] + " lakh ";
        num %= 100000;
    }
    // handling ten thousand place
    if(num >= 10000 && num < 11000){
        result += tens[num / 10000] ;
        num %= 10000;
        if(num >= 100 && num <= 999){
            result += " thousand ";
        }
        if(num == 0){
            result += " thousand ";
        }
    }
    if(num >=10000 && num <= 19999){
        num %= 10000;
        result += teens[num/1000] + " thousand ";
        //num ;
        num %= 1000;
    }
    if(num >= 20000 && num <= 99999){
        result += tens[num/10000];
        num %= 10000;
        if(num >= 100 && num <= 999){
            result += " thousand ";
        }
        if(num == 0){
            result += " thousand ";
        }
        if(num >= 0 && num <= 999){
            result += "";
        }
        else{
            result += "-";
        }
    }
    //handling thousand place
    if(num >= 1000 && num <= 9999){
        result += ones[num/1000]+" thausand ";
        num %= 1000;
    }
    //handling hundred place
    if(num >=100 && num <=999){
        result += ones[num/100] + " hundred ";
        num %= 100;
    }
    // handling tens place
    if(num >= 10 && num <=19){
        result +=  teens[num%10];
        // return result;
    }
    else if(num >=20 && num <= 99){
        result += tens[num/10];
        num %= 10;
        if(num>0){
            result += "-";
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
    cout<<endl;
    cout<<"Enter the number between 1 to 999999 --> ";
    cin>>number;
    string word = NumberToWord(number);
    cout<<"The result is :-> "<<word<<endl;
    cout<<endl;
    return 0;
}