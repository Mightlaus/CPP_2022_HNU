#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int yA, yB, yC, mA, mB, mC, dA, dB, dC;
	cin >> yA >> mA >> dA;
	cin >> yB >> mB >> dB;
	cin >> yC >> mC >> dC;
	
	int A, B, C;
	A = 12*30*yA + 30*mA + dA; 
	B = 12*30*yB + 30*mB + dB; 
	C = 12*30*yC + 30*mC + dC; 
	
	if(A>B && A>C && B>C)
		cout << "CBA";
	else if(A>B && A>C && B<C)
		cout << "BCA";
	else if(A<B && A>C && B>C)
		cout << "CAB";
	else if(A<B && A<C && B>C)
		cout << "ACB";
	else if(A>B && A<C && B<C)
		cout << "BAC";
	else if(A<B && A<C && B<C)
		cout << "ABC";
} 
