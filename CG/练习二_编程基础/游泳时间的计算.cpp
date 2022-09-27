#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// https://stackoverflow.com/questions/14265581/parse-split-a-string-in-c-using-string-delimiter-standard-c

int main(){
//	string start, end;
//	cin >> start >> end;
//	string delimiter = ":";
//	string sToken
//	string sHour = start.substr(0, start.find(delimiter));
//	string sMinute = start.substr(1, start.find(delimiter));
//	string sSecond = start.substr(2, start.find(delimiter));
//	
//	
//	cout << "Hour: " << sHour << endl
//		<< "Minute: " << sMinute << endl
//		<< "Second: " << sSecond << endl;
	int sh1, sm1, ss1;
	int eh1, em1, es1;
	char delmt1, delmt2, space;
	
	cin >> sh1 >> delmt1 >> sm1 >> delmt2 >> ss1
		>> eh1 >> delmt1 >> em1 >> delmt2 >> es1;
	
	int start_sec = sh1*3600 + sm1*60 + ss1;
	int end_sec = eh1*3600 + em1*60 + es1;
	int spend = end_sec - start_sec;
	
	int hour = spend / 3600;
	int minute = spend % 3600 /60;
	int second = spend % 3600 % 60;
	
	cout << hour << ':' 
		<< setw(2) << setfill('0') << right << minute << ':'
		<< setw(2) << setfill('0') << right << second;
	
}

