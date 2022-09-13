//---------------------
// exercise6
//---------------------
#include<stdio.h>
#include<math.h>
//---------------------
int main(){
  float a, b, c, s, area;
  printf("please input 3 sides of one triangle:\n");
  scanf("%f, %f, %f", &a, &b, &c);

  s = (a + b+ c)/2;
  area = sqrt(s*(s-a)*(s-b)*(s-c));
  printf("a=%7.2f, b=%7.2f, c=%7.2f\n", a, b, c);
  printf("area of triangle is %10.5f\n", area);
}//--------------------

