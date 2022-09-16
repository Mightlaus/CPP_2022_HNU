#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int iYear;
	cin >> iYear;
	string chYear = to_string(iYear); 
	
	iYear++;
	while(1){
		int i4 = iYear / 1000;
		int i3 = iYear / 100 % 10;
		int i2 = iYear / 10 % 10;
		int i1 = iYear % 10;
		
		if(i4!=i3 && i4!=i2 && i4!=i1 && i3!=i2 && i3!=i1 && i2!=i1){
			cout << iYear;
			break;
		}
		else if(iYear > 9000){
			break;
		}
		else
			iYear++;
	}

} 
