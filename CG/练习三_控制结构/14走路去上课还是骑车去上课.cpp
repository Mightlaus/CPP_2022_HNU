#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	const double unlock=27, lock=23, walkSpeed=1.2, rideSpeed=3;
	int distance=0;
	cin >> distance;
	
	double walkConsume = distance / walkSpeed;
	double rideConsume = unlock + lock + distance / rideSpeed;
	
	if(walkConsume < rideConsume){
		cout << "Walk";
	} else if(walkConsume > rideConsume){
		cout << "Bike";
	} else{
		cout << "All";
	}
}
