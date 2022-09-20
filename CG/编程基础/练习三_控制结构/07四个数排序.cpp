#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<iomanip>

using namespace std;


int switch_bigger(int &num1, int &num2){
	if(num1<num2){
		int tmp = num2;
		num2 = num1;
		num1 = tmp;
		return 0;
	}
	else
		return 1;
}


int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	switch_bigger(a, b);
	switch_bigger(a, c);
	switch_bigger(a, d);
	switch_bigger(b, c);
	switch_bigger(b, d);
	switch_bigger(c, d);
	printf("%d %d %d %d", a, b, c, d);
}


