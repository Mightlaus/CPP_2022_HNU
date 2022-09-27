#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool is_run(int year){
	if(!(year%4) && year%100){
		return true;
	} else if(!(year%400)){
		return true;
	} else if(!(year%3200) && !(year%172800)){
		return true;
	}
	
	return false;
}

int main(){
	vector<int> big_month({1, 3, 5, 7, 8, 10 ,12});
	vector<int> small_month({4, 6, 9, 11});
	
	int year, month;
	cin >> year >> month;
	
	if(count(big_month.begin(), big_month.end(), month)){
		cout << 31;
	} else if(count(small_month.begin(), small_month.end(), month)){
		cout << 30;
	} else if(is_run(year)){
		cout << 29;
	} else{
		cout << 28;
	}

}
