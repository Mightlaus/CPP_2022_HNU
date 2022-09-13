#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int a(5);
	
	int *pointer = &a;
	
	cout << &pointer << endl;
	cout << *pointer << endl;
	
	vector<int> fib, luc, pel, tri, squ, pen;
	vector<int> *pv = 0;
	
	
	const int seq_cnt = 6;
	vector<int> *seq_addrs[seq_cnt] = {
	 	&fib, &luc, &pel, &tri, &squ, &pen
	};
	
	vector<int> *current_vec = 0;
	
	for (int ix = 0; ix < seq_cnt; ++ix)
	{
		current_vec = seq_addrs[ix];
		cout << "current addresss is " << current_vec << endl;
	}
	 
	
	
}
