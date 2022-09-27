#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
	double F, C;
	cin >> F;
	C = 5 * (F - 32) / 9;
	
	cout << fixed << setprecision(5) << C << endl;
}
