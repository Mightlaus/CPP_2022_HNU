#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	vector<int> pell_seq(5);

	pell_seq[0] = 1;

	cout << pell_seq[0] << endl;
	cout << pell_seq[1] << endl;

	int elem_seq[18] = {
		1,2,3,
		3,4,7,
		5,8,10
	};
	
	cout << elem_seq << endl;  // elem_seq is an int object so it will point to
							   // an address
	
}
