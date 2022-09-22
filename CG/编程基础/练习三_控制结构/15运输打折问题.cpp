#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int weight, distance;
	double discount=0;
	cin >> weight >> distance;
	
	if(distance<250){
		discount = 0;
	} else if(distance<500){
		discount = 0.02;
	} else if(distance<1000){
		discount = 0.05;
	} else if(distance<2000){
		discount = 0.08;
	} else if(distance<3000){
		discount = 0.1;
	} else if(distance>=3000){
		discount = 0.15;
	}
	
	double totalFee = (1 - discount) * weight * distance;
	
	cout << totalFee;
}
