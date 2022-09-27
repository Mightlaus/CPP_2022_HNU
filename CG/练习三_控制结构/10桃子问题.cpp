#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n;
	cin >> n;
	double current = 1;
	
	for(int cur_day=n; cur_day>1; --cur_day){
		current += 1;
		current *= 2;
	}
	
	cout << current;
} 
