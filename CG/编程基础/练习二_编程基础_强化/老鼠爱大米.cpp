#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	double big, small, reserve;
	cin >> big >> small;
	reserve = big/3 + small/4;
	
	cout << fixed << setprecision(2) << reserve;
} 
