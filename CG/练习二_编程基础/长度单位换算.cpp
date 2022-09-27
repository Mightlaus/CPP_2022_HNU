#include <iostream>

using namespace std;

int main(){
	int remain, mi, yd, ft, in;
	cin >> in;  // in Ó¢´ç 
	
	mi = in / (1760 * 3 * 12);	remain = in % (1760 * 3 * 12);
	yd = remain / (3 * 12);		remain = remain % (3 * 12);
	ft = remain / 12;			remain = remain % 12;
	in = remain;
	
	
	if (mi)
		cout << mi << " mi ";
	if (yd)
		cout << yd << " yd ";
	if (ft)
		cout << ft << " ft ";
	if (in)
		cout << in << " in ";		

}
