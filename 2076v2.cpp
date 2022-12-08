#include <iostream>

using namespace std;

class Account{
	private:
		int acc_no, balance;
		
	public: 
		static int minBalance;
		Account(){
			
		}
		Account(int a, int b){
			acc_no = a;
			balance = b;
		}
		void getCred(int a, int b){
			acc_no = a;
			balance = b;
		}
		
		void display(){
			cout<<"Account number: "<<acc_no<<endl;
			cout<<"Available Balance: "<<balance<<endl;
		}
		
		static void displayMinBalance(){
			cout<<"Minimum balance: "<<minBalance;
		}
};

int Account::minBalance = 1000;

int main(){
	Account acc[5];
	int num, bal;
	for(int i = 0; i<5; i++){
		cout<<"\nEnter the account number and balance of account"<<i+1<<": "<<endl;
		cin>>num>>bal;
		acc[i].getCred(num, bal);
	}
	
	
	cout<<endl;
	Account::displayMinBalance();
	cout<<endl;
	
	
	for(int i = 0; i<5; i++){
		cout<<endl;
		acc[i].display();
		cout<<endl;
	}
}


