//Problem Statement: Define the base class Shape with two data members of any numeric type that are employed to compute the area of respective shape. 
//Add member functions to input the data members values and display the area in base class only. 
//Derive two classes from base class namely, Triangle & Rectangle. Take the display function as virtual in base class and redefine it in the derived classes. 
//Using above classes , write a program to accept parameters for triangle or rectangle and display the area Using Virtual Functions.
#include<iostream>
using namespace std;
class shape {
	public:
		double x, y;
		shape() {x=0; y=0;}
		void getdata() {
			cout<<"x: ";
			cin>>x;
			cout<<"y: ";
			cin>>y;
		}
		virtual void display_area() = 0;
};
class triangle : public shape {
	public:
		void display_area()
		{
			cout<<"The area of triangle is: "<<0.5*x*y<<endl;
		}
};
class rectangle  : public shape 
{
	public:
		void display_area()
		{
			cout<<"The area of rectangle is: "<<x*y<<endl;
		}
};
int main()
{
	triangle tr;
	rectangle rc;
	int choice;
	cout<<"Welcome to Geometric Area Calculator"<<endl;
	do {
		cout<<"\n1. Triangle Area Calculator \n2. Rectangle Area Calculator \n3. Exit"<<endl;
		cout<<"Enter choice: ";
		cin>>choice;
		switch (choice) {
			case 1: {
					shape *st= &tr;
					cout<<"Enter the length (x) and altitude (y) of an triangle:"<<endl;;
					st->getdata();
					st->display_area();
					break;
					}
			case 2: {
					shape *s= &rc;
					cout<<"\nEnter the length (x) and breadth (y) of an rectangle:"<<endl;
					s->getdata();
					s->display_area();
					break;
					}
			case 3: {
					cout<<"Exiting!";
					break;
					}
			default: {cout<<"Invalid choice."; }
		}
	}while(choice!=3);
	return 0;	
}

