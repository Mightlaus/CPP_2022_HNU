#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<iomanip>

using namespace std;

int main()
{
	int wage, dist;
	char yn;
	
	cin >> wage >> yn >> dist;
	
	int target = 0;
	if(wage>=5000)
		target++;
	if(yn=='y')
		target++;
	if(dist<=2000)
		target++;
	
	if(target>=2)
		cout << "Accept";
	else
		cout << "Refuse";
}

