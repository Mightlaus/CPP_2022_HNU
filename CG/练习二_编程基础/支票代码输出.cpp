#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int id;
	double value;
	
	cin >> id >> value;
	
	cout << right << setfill('0') << setw(8) << id << endl;
	cout << fixed << setprecision(2) << value;
}
