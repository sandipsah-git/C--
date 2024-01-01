#include <iostream>
using namespace std;
class account{
	private:
		long long int account_no;
		string account_holder_name;
		double balance ;
		float minimum_balance;
		double amnt;
		double wdr;
		public:
			void create_account(){
				cout<<"* Enter the account number : ";
				cin>>account_no;
				cout<<"* Enter the account holder name : ";
				cin>>account_holder_name;
				cout<<"* Enter your balance : ";
				cin>>balance;
				cout<<"* Enter your minimum balance : ";
				cin>>minimum_balance;
				cout<<endl;
			}
			void display(){
				cout<<"# Created successfully your account! \n";
				cout<<"       -> The account number is : "<<account_no<<endl;
				cout<<"       -> The name of account holder is : "<<account_holder_name<<endl;
				cout<<"       -> The value of balance is : "<<balance<<endl;
				cout<<"       -> The value of minimum balance is : "<<minimum_balance<<"\n"<<endl;
			}
			void diposite(){
				cout<<"* Enter the amount for diposite : ";
				cin>>amnt;
				cout<<endl;
				balance = balance + amnt;
				cout<<"    # Your balance is deposited successfully!"<<endl;
				cout<<"           -> Now your Balance is : "<<balance<<"\n"<<endl;
			}
			void withdraw(){
				cout<<"* Enter the amount for withdraw : ";
				cin>>wdr;
				cout<<endl;
				if(wdr < minimum_balance){
					cout<<"   -> Your can not withdraw below : "<<minimum_balance<<endl;
				}
				else if (balance - wdr >= minimum_balance ){
					balance = balance - wdr;
					cout<<"# Withdraw of "<<wdr<<" is Successfull!"<<endl;
					cout<<"   -> Now your current balance is : "<<balance<<"\n             Thank You!"<<endl;
				}
				else if (wdr > balance){
					cout<<"Insufficient balance. \n    Sorry!"<<endl;
				}
			}
};
int main (){
	account a;
	a.create_account();
	a.display();
	a.diposite();
	a.withdraw();
	return 0;
}

