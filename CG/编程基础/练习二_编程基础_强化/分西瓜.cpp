#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	long long w;
	cin >> w;
	
	if (w!=2){
		if (w%2==0)
			cout << "Yes";
		else
			cout << "No";
	}
	else
		cout << "No";
} 
