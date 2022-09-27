#include <iostream>
#include <iomanip>

using namespace std;

void switch_b(int &num1, int &num2){
//	ÉýÐòÅÅÁÐ½»»» 
	int tmp=0;
	if(num1 > num2){
		tmp = num1;
		num1 = num2;
		num2 = tmp;
	}
}


int main(){
	int x1, x2, x3, x4;
	cin >> x1 >> x2 >> x3 >> x4;
	switch_b(x1, x2);
	switch_b(x1, x3);
	switch_b(x1, x4);
	switch_b(x2, x3);
	switch_b(x2, x4);
	switch_b(x3, x4);
	
	printf("%d %d %d", x4-x3, x4-x2, x4-x1);
} 
