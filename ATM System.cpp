//ATM System (Encapsulation + Abstraction)
//Create ATM class (private: pin, balance).
//Provide methods to checkBalance(), deposit(), withdraw() only if the correct pin is entered

#include <iostream>
using namespace std;

class ATM{
private:
	int pin;
	double balance;
	
	bool verifypin(int enteredpin){
		return enteredpin == pin;
		
	}
public:
	ATM(int p,double b){
		pin=p;
		balance=b;
		
	}
	void checkBalance(int enteredpin){
		if(verifypin(enteredpin)){
			cout<<"Balance:" << balance<<endl;
		}
		else{
			cout<<"Incorrect pin"<<endl;
		}
	}
	void deposit(int enteredpin,double amount){
		if (verifypin(enteredpin)){
			balance +=amount;
			cout<< "Deposited" << amount<<endl;
		}
		else{
			cout<< "incorrect pin" <<endl;
		}
	}
	void withdraw(int enteredpin, double amount){
		if (verifypin(enteredpin)){
			if(amount<=balance){
				balance-=amount;
				cout<< "withdraw"<<amount<<endl;
			}
			else{
				cout<<"insufficient balance";
			}
			
		}
		else{
			cout<<"incorrect pin"<<endl;
		}
	}
	
};
int main(){
	ATM atm(1122,7000);
	
	atm.checkBalance(1122);
	atm.deposit(1122,3000);
	atm.withdraw(1122,5000);
	
	atm.checkBalance(1122);
	atm.withdraw(1122,1000);
	atm.checkBalance(1122);
	return 0;
}

