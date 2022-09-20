#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<iomanip>

using namespace std;

int main(){
	int bigAlp=0, litAlp=0, num=0, other=0, totalIpt=0, sum=0;
	char tmp;
	
	cin >> totalIpt;
	for(int i=0; i<totalIpt; i++){
		cin >> tmp;
		if(tmp>='A' && tmp<='Z')
			bigAlp++;
		else if(tmp>='a' && tmp<='z')
			litAlp++;
		else if(tmp>='0' && tmp<='9'){
			num++;
			sum += tmp - '0';
		}
		else
			other++;
	}
	
	cout << bigAlp << ' ' << litAlp << ' ' << num << ' ' << other;
	 
	if(num){
		cout << '\n' << sum;
	}
}


