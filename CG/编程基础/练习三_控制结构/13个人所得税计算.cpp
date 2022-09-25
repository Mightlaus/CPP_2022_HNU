#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int income, sp_dedct, f_dedct=0;
    double rate=0.03;

    cin >> income >> sp_dedct;

	income -= 5000+sp_dedct;
	
    if(income<=3000){
        rate = 0.03;
        f_dedct = 0;
    }
    else if(income<=12000){
        rate = 0.1;
        f_dedct = 210;
    }
    else if(income<=25000){
        rate = 0.2;
        f_dedct = 1410;
    }
    else if(income<=35000){
        rate = 0.25;
        f_dedct = 2660;
    }
    else if(income<=55000){
        rate = 0.3;
        f_dedct = 4410;
    }
    else if(income<=80000){
        rate = 0.35;
        f_dedct = 7160;
    }
    else if(income>=80000.01){
        rate = 0.45;
        f_dedct = 15160;
    }

    double final = income * rate - f_dedct;

    if(final>=0) {
        cout << final;
    } else {
        cout << 0;
    }
}
