#include <iostream>
#include <string>

using namespace std;
bool fibon_elem(int, int &);

bool fibon_elem(int pos, int &elem)
{
	elem = 1;
	return false;
}

int main()
{
	int pos;
	cout << "Enter a position: ";
	cin >> pos;
	
	int elem;
	if (fibon_elem(pos, elem))
		cout << "element # " << pos << " is" << elem << endl;
	else
		cout << "Sorry, could not calculate element # " << pos << endl; 
	
	// pay attention to the 'pass by reference' or 'pass by value' below
	int ival = 1024;  // initialize a object ival with its address and value(1024)
	int *pi = &ival;  // pi is a pointer which point to the address of ival
	int &rval = ival; // rval is exactly ival, meaning &rval==&ival and rval==ival
	int jval = ival;  // jval just copies the value of ival, meaning jval==ival but &jval!=&ival


	cout << "ival: " << ival << endl; 
	cout << "pi: "	<< pi << endl;
	cout << "rval: " << rval << endl;
	cout << "jval:" << jval << endl;
	
	cout << "is &rval=&ival ? : " << &rval==&ival << endl;
	cout << "is rval=ival ? : " << rval==ival << endl;
	cout << "is &jval=&ival ? : " << &jval==&ival << endl;
	cout << "is jval=ival ? : " << jval==ival << endl;
	return 0;
}


