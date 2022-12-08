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
		void setCred(int a, int b){
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
    bool MinCheck = true;
	int num, bal;
	for(int i = 0; i<5; i++){
        while (MinCheck = true){
            cout<<"\nEnter the account number and balance of account "<<i+1<<": "<<endl;
            cin>>num>>bal;
            if (bal < Account::minBalance){
                cout<<"The amount is below minumum balance. Please enter amount above 1000\n";
            }
            else{
                break;
            }
        }
        acc[i].setCred(num, bal);
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

