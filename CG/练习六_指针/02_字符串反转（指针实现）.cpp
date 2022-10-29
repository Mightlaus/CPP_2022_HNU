#include  <iostream>
#include  <cstring>
using  namespace  std;
void  reverseStr(char  *s);
int  main()
{
    char  str[201];
    gets(str);
    reverseStr(str);
    puts(str);

    return  0;
}

void  reverseStr(char  *s)
{
    char  *p=s,*q=s;
    while(*q)
    q++;/*  将指针q移动到字符串末尾  */


    q--;/*  指针q指向最后一个字符  */

    while(p<q)
    {
        /*  将指针p、q所指向位置的字符进行交换，之后指针p、q相向移动  */
        if(p>=q){
            break;
        }

        swap(*p++, *q--);

    }
}