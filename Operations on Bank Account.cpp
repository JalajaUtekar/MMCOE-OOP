//Problem Statement: Implement a class to illustrate working of a bank account of a customer that consists of the following members.
//Data members: Name of the customer, Account Type, Account Number, Available balance amount in the account. 
//Member Functions: Assign initial values using constructors, Deposit an amount in account, Withdraw an amount, Display account details.
#include <iostream>
#include <string>
using namespace std;
class bank 
{
      string name, atype;
      int ano;
      int bal;
      public:
      	bank() {}
        bank(int no, string n, string t, int b) {	
    		  ano = no;
    		  name = n;
    		  atype = t;
    		  bal = b;
        }
    	  void getinfo(){
        		cout << "Enter Account no.: ";
          	cin >> ano;
          	cout << "Enter Account Type: ";
      		  cin >> atype;
        		cout << "Enter Name: ";
        		cin >> name;
        		cout << "Enter Account Balance: ";
         		cin >> bal;
      	}
      	void deposit() {
     		  int amt;
      		cout << "Initial Balance is: " << bal << endl;
        	cout << "Enter Amount to be deposited: ";
      		cin >> amt;
		      if (bal<amt) {
			        cout<<"Insufficient Balance!\n";
          }
          else {
        		  bal += amt;
		      }
    	  }
        void withdraw() {
       		float amt;
        	cout << "Enter Amount to be withdrawn: ";
        	cin >> amt;
      		bal -=  amt;
    	  }
    	  void display() 
    	  {	
        	cout << "Name: " << name << endl;
        	cout << "Account number: " << ano << endl;
      		cout << "Account Type: " << atype << endl;
      		cout << "Amount Balance: " << bal << endl;
    	  }
};
int main() {
    	int ch;
    	char ans;
    	bank bk;
	    cout<<"Welcome to MMCOE Bank!\n";
	    bk.getinfo();
    	do 
      {
          cout << "\n1. Deposit \n2. Withdraw \n3. Display\n";
       		cout << "Enter the choice: ";
        	cin >> ch;
        	switch (ch) 
          {
        			case 1: bk.deposit(); 
         			        break; 
              case 2: bk.withdraw(); 
            			    break;
            	case 3: bk.display(); 
            	        break;
            	default: cout << "Invalid choice.\n";
        	}
        	cout << "Great! \nDo you want to continue (Y/N): ";
        	cin >> ans;
    	} while (ans == 'Y' || ans == 'y');
	    cout<<"Exiting Bank.";
    	return 0;
}
