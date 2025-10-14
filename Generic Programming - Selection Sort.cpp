//Problem Statement: Design a program with a template for sorting an accepted array & displaying it using integer or float type data. Implement any sorting type using Generic Programming.
#include<iostream>
using namespace std;
template<class T>
 	void ssort(T a[],int n) {
		int i,j;
		for (i=0;i<n-1;i++) {
			for(j=i+1;j<n;j++) {
				if(a[i]>a[j]) {
					T temp;
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
		}}}
		for (int i=0;i<n;i++) {
			cout<<a[i]<<" | ";
		} 
cout<<endl;
	}
int main() {
	int i, n1, n2;
	cout<<"Enter count of integers to be sorted: ";
	cin>>n1;
	int a[n1];
	cout<<"Enter list of integers to be sorted"<<endl;
	for (i=0;i<n1;i++) {
		cout<<"Integer "<<i+1<<": ";
		cin>>a[i];
	}
	cout<<"Sorting of Integer array : ";
	ssort(a,n1);
	cout<<"Enter count of float numbers to be sorted: ";
	cin>>n2;
	float b[n2];
	cout<<"Enter list of float numbers to be sorted"<<endl;
	for (i=0;i<n2;i++) {
		cout<<"Integer "<<i+1<<": ";
		cin>>b[i];
	}
	cout<<"Sorting of Floating array : ";
	ssort(b,n2);
	return 0;
}
