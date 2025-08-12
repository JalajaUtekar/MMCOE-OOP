//Problem Statement: Develop a program in C++ to create a database of an employee's information system containing the following fields: Name, employee ID, Department, Date of Joining, Contact address, Telephone number etc. 
//Construct the database with suitable member functions to accept and print employee details. Make use of constructor types, destructor, static members, inline function and dynamic memory allocation using operators-new and delete. 
#include<iostream>
#include<string>
using namespace std;
class Employee
{
	public:
	  long long tele_no;
	  string name,dept,contact_address,joining_date;
	  static int id;
  	static void get_id() {		
    		cout<<"The employee no is:"<<id<<endl;
    		id++;
    		cout<<"\n";
  	}
  	void getdata();
  	inline void showdata();
  	Employee() { 	  //Default Constructor		
	    	cout<<"Default Constructor Block\n";
	    	tele_no=0;
	  }
	  Employee(string nm,long long tel_no,string doj,string dpt,string contact_add) {    //Parameterized Constructor
		    cout<<"Parameterized Constructor Block\n";
		    name=nm;
		    tele_no=tel_no;
		    joining_date=doj;
		    dept=dpt;
	    	contact_address=contact_add;
	  }
  	Employee(Employee &emp) {
    		cout<<"Copy Constructor Block\n";
	    	name=emp.name;
	    	tele_no=emp.tele_no;
	    	joining_date=emp.joining_date;
	    	dept=emp.dept;
	    	contact_address=emp.contact_address;
	  }	
    ~Employee() {
     		cout<<"Destructor called for Employee: "<<name<<endl;
	  }
};
int Employee::id=1;  //Static data member
void Employee::getdata()
{
	  cout<<"Enter Name: ";
	  cin>>name;
	  cout<<"Enter Telephone Number: +91";
	  cin>>tele_no;
   	cout<<"Enter Contact Address: ";
  	cin>>contact_address;
  	cout<<"Enter the Department: ";
  	cin>>dept;
  	cout<<"Enter Date of Joining: ";
	  cin>>joining_date;
	  cout<<"\n";
}
inline void Employee::showdata()           //Inline Function
{
	  cout<<"Employee Name: "<<name<<endl;
  	cout<<"Employee Telephone Number: +91"<<tele_no<<endl;
	  cout<<"Employee Contact Address: "<<contact_address<<endl;
  	cout<<"Employee Department: "<<dept<<endl;
  	cout<<"Employee Date of Joining: "<<joining_date<<endl;
  	cout<<"\n";
}
int main()
{
  	Employee emp1;       
    emp1.getdata();
   	Employee::get_id();       //Static Member Function  
   	emp1.showdata();
   	cout<<"\n";         
   	Employee emp2("Jalaja",1234567890,"23/03/2025","TechOps","Kothrud");
   	Employee::get_id();       //Static Member Function  
   	emp2.showdata();
   	cout<<"\n";
   	Employee emp3(emp2);
   	Employee::get_id();       //Static Member Function     
   	emp3.showdata();
   	cout<<"\n";
   	Employee *ptr = new Employee("Rahul", 9087654321, "23/04/2000", "TechOps", "Baner"); //new and delete operator
   	ptr->showdata();
   	delete ptr;
   	return 0;
}
