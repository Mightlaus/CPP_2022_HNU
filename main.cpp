#include <iostream>
#include <string>

 
using namespace std;

int *getP(void);

int *getQ(void);

int main()

{

    int *p, *q;

    p=getP();

    cout<<p[0]<<" "<<p[1]<<endl;

    q=getQ();

    cout<<q[0]<<" "<<q[1]<<endl;
	string str("123456sdf");
	
	
    return 0;
    
   

}



int *getP(void)

{

    int *s=new int[2];

    s[0]=1, s[1]=2;

    return s;

}



int *getQ(void)

{

    int s[2];

    s[0]=1, s[1]=2;

    return s;

}
