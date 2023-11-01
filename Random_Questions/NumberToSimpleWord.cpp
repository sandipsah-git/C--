#include <iostream>
using namespace std;
string word[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

string WordToNumber(int num){
    if(num < 0 ){
        return "Number is out of Range.";
    }
    if(num == 0){
        return "Zero";
    }
    string result; // initializing result variable;
    while(num > 0){
        result =  word[num % 10] + " " + result ;
        num /= 10;
    }
    // for (; num > 0; num /= 10){
    //     result = word[num % 10] + " " + result;
    // }
    return result;
}
int main(){
    int number;
    cout<<endl;
    cout<<"Enter a number :-> ";
    cin>>number;
    string ans = WordToNumber(number);
    cout<<"The result is :-> "<<ans<<endl;
    cout<<endl;
    return 0;
}


/*
#include <iostream>
using namespace std;
string word[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

string NumberToSimpleWord(int num){
    if(num < 0){
        return "Number is out of Range.";
    }
    if(num == 0){
        return "zero";
    }
    while(num > 0){
        cout<<word[num%10]<<" ";
        num /= 10;
    }
}
int main (){
    int number;
    cout<<"Enter a number :-> ";
    cin>>number;
    cout<<endl;
    NumberToSimpleWord(number);
    return 0;
}
*/