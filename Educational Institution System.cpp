//Problem Statement: Design an Educational Institution that maintains a database of all staff members where the database is segregated into a number of classes having hierarchical relationships. 
//Define all classes with suitable data members and required member functions to build the database and fetch individual details.
#include <iostream>
#include <string>
using namespace std;
class Staff {
  protected:
    	string name, staff_id, date_of_joining, contact_number, address;
  
  public:
    	void acceptDetails() {
		      cout << "Enter Staff ID: ";
		      cin>>staff_id;
		      cout << "Enter Name: ";
	      	cin>>name;
		      cout << "Enter Date of Joining (DD/MM/YYYY): ";
	      	cin>>date_of_joining;
	      	cout << "Enter Contact Number: +91";
		      cin>>contact_number;
	      	cout << "Enter Address: ";
		      cin>>address;
	    }
	    void printDetails() {
        	cout << "------------------------------------" << endl;
      		cout << "Staff ID: " << staff_id << endl;
      		cout << "Name: " << name << endl;
      		cout << "Date of Joining: " << date_of_joining << endl;
      		cout << "Contact Number: +91" << contact_number << endl;
       	 	cout << "Address: " << address << endl;
    	}
};
class TeachingStaff : public Staff {
  private:
      string subject, department, qualification;

  public:
	    TeachingStaff() {}
	    void accept1() {
	        Staff::acceptDetails();
		      cout << "Enter Subject Taught: ";
      		cin>>subject;
		      cout << "Enter Department: ";
		      cin>>department;
		      cout << "Enter Qualification: ";
		      cin>>qualification;
	    }
  	  void print1() {
	      	Staff::printDetails();
	      	cout << "Role: Teaching Staff" << endl;
	      	cout << "Subject Taught: " << subject << endl;
	      	cout << "Department: " << department << endl;
	      	cout << "Qualification: " << qualification << endl;
	      	cout << "------------------------------------" << endl;
	    }
};
class SupportStaff : public Staff {
  private:
	    string position, shift_schedule;

  public:
    	SupportStaff() {}
    	void accept2() {
      		Staff::acceptDetails();
	      	cout << "Enter Position (e.g., Registrar, Librarian): ";
	      	cin>>position;
	      	cout << "Enter Shift Schedule (e.g., Day/Night): ";
      		cin>>shift_schedule;
     	}
    	void print2() {
	      	Staff::printDetails();
	      	cout << "Role: Support Staff" << endl;
		      cout << "Position: " << position << endl;
	      	cout << "Shift Schedule: " << shift_schedule << endl;
	      	cout << "------------------------------------" << endl;
	    }
};
int main()
{
	int nt, ns;
	cout << "Enter the number of Teaching Staff: ";
	cin >> nt;
	TeachingStaff teachingStaff[nt];
	for (int i = 0; i < nt; i++) {
		  cout << "Please enter Teaching Staff #" << i + 1 << " information" << endl;
		  teachingStaff[i].accept1();
	}
	cout << "\nEnter the number of Support Staff: ";
	cin >> ns;
	SupportStaff supportStaff[ns];
	for (int i = 0; i < ns; i++) {
		  cout << "Please enter Support Staff #" << i + 1 << " information: " << endl;
		  supportStaff[i].accept2();
	}
	cout << "\n--- Displaying Teaching Staff Details ---" << endl;
	for (int i = 0; i < nt; i++) {
	  	teachingStaff[i].print1();
	}
	cout << "\n--- Displaying Support Staff Details ---" << endl;
	for (int i = 0; i < ns; i++) {
		  supportStaff[i].print2();
	}
	return 0;
}
