//Problem Statement: Design a program with the following functionalities:
//1. A function to read two numbers(Double type)
//2. A function to calculate division of these two numbers
//3. A try block to detect and throw an exception when divide by zero condition occurs
//4. Appropriate catch block to handle the exception thrown
#include<iostream>
using namespace std;
class ex {
  double x, y;
	public:
		ex() {
			x=0;
			y=0;
		}
		ex(double a, double b){
			x=a;
			y=b;
		}
		void accept() {
			cout<<"Enter two numbers: "<<endl;
			cout<<"First number: ";
			cin>>x;
			cout<<"Second number: ";
			cin>>y;
		}
		void divide(){
			Try {
				if(y!=0) {
					cout<<"a = "<<x<<"\nb = "<<y<<endl;
					cout<<"\nDivision is: "<<x/y<<endl;
				}
				else {
					throw y;
				}
			}
			catch(double y) {
				cout<<"Caught Divide By Zero exception.";
			}
		}
};

int main() {
	cout<<"Sample Sum"<<endl;
	ex e1(25,5);
    	e1.divide();
    	cout<<endl;
    	ex e2;
    	e2.accept();
    	e2.divide();
    	return 0;
}

