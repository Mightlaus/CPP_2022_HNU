#include <iostream>
#include <iomanip>
#include <string>
#include <regex>


// for regex expression details, see:
// https://linuxhint.com/regular-expression-basics-cpp/

using namespace std;

int main(){
	char inPos[] = "(-1,10),(244,-849),(0,5)";
//	cin >> inPos;
	
	regex pattern("\\((\\d+|-\\d+),(\\d+|-\\d+)\\),"
					"\\((\\d+|-\\d+),(\\d+|-\\d+)\\),"
					"\\((\\d+|-\\d+),(\\d+|-\\d+)\\)");
	cmatch reResult;
	
	if (regex_search(inPos, reResult, pattern)){
		cout << '[' << reResult[1] << ',' << reResult[2] << ']' << endl;
		cout << '[' << reResult[3] << ',' << reResult[4] << ']' << endl;
		cout << '[' << reResult[5] << ',' << reResult[6] << ']' << endl;
	}
	else
		cout << "not match" << endl; 


}
