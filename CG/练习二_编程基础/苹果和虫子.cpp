#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
	int appleNum, eatSpeed, timeSpend;  // eat 1 apple per eatSpeed
	int appleRemain;
	
	cin >> appleNum >> eatSpeed >> timeSpend;
	
	if (timeSpend / eatSpeed >= appleNum)
		cout << 0 << endl;
	else if (timeSpend % eatSpeed){ // eaten apple is not an int
		appleRemain = appleNum - timeSpend / eatSpeed - 1;
		cout << appleRemain << endl;
	}
	else{  // eaten apple is an exact int
		appleRemain = appleNum - timeSpend / eatSpeed;
		cout << appleRemain << endl;
	}
}
