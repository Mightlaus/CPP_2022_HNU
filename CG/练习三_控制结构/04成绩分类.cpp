#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<iomanip>

using namespace std;

int main()
{
	int grade;
	cin >> grade;
	if(grade>=90){
		cout << 'A';
	}
	else if(grade>=80){
		cout << "B";
	}
	else if(grade>=70){
		cout << "C";
	}
	else if(grade>=60){
		cout << "D";
	}
	else{
		cout << "E";
	}
}

