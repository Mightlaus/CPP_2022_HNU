#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	int n, ball;
	cin >> n;
	
	int scores;
	
	for(int cur_idx=0; cur_idx<n; cur_idx++){
		char cur_ball;
		cin >> cur_ball;
		switch(cur_ball){
			case 'r':
				int num_r;
				cin >> num_r;
				scores += num_r;
				break;
			case 'y':
				scores += 2;
				break;
			case 'g':
				scores += 3;
				break;
			case 'c':
				scores += 4;
				break;
			case 'b':
				scores += 5;
				break;
			case 'p':
				scores += 6;
				break;
			case 'B':
				scores += 7;
				break;
		}
	}
	
	cout << scores;
}
