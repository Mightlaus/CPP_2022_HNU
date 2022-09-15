#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int k, w;
	long long int n;
	cin >> k >> n >> w;
	
	int total = k * (1 + w) * w / 2;
	
	if (total <= n)
		cout << 0;
	else {
		int need = total - n;
		cout << need;
	}
} 
