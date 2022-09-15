#include <iostream>
#include <string>

using namespace std;

int main(){
	int x1, x2, x3, y1, y2, y3;
	char blank;
	
	cin >> blank >> x1 >> blank >> y1 >> blank >> blank
		>> blank >> x2 >> blank >> y2 >> blank >> blank
		>> blank >> x3 >> blank >> y3 >> blank;
	
	cout << '[' << x1 << ',' << y1 << ']' << endl;
	cout << '[' << x2 << ',' << y2 << ']' << endl;
	cout << '[' << x3 << ',' << y3 << ']' << endl;
}
