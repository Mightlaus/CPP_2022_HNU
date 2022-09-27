#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	long double x;
	cin >> x;
	if(x<=-1){
		printf("%.6f", (double) (x-1));
	}
	else if(x<=2){
		printf("%.6f", (double) (x*2));
	}
	else if(x<=10){
		printf("%.6f", (double) (x*(x+2)));
	}
	else
		cout << "ERROR";
}
