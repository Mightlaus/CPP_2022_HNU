#include <iostream>
#include <string>

using namespace std;

template <typename elemType>

void display_message(const string &msg, const vector<elemType> &vec){
	cout << msg;
	for(int ix = 0; ix < vec.size(); ix++){
		elemType t = vec[ix];
		cout << t << ' ';
	}
}

int main(){
}


