#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<iomanip>

using namespace std;

int main()
{
	int num, by3, by5, by7;
	cin >> num;
	
	by3 = num % 3;
	by5 = num % 5;
	by7 = num % 7;
	
	if(by3 && by5 && by7){
		cout << "null";
	}
	else if(!by3 && by5 && by7){
		cout << "It's divisible by 3";
	}
	else if(by3 && !by5 && by7){
		cout << "It's divisible by 5";
	}
	else if(by3 && by5 && !by7){
		cout << "It's divisible by 7";
	}
	else if(!by3 && !by5 && by7){
		cout << "It's divisible by 3,5";
	}
	else if(!by3 && by5 && !by7){
		cout << "It's divisible by 3,7";
	}
	else if(by3 && !by5 && !by7){
		cout << "It's divisible by 5,7";
	}
	else if(!by3 && !by5 && !by7){
		cout << "It's divisible by 3,5,7";
	}
}

