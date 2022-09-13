//***************************
//**    Josephus问题解法1  **
//**    jose1.cpp          **
//***************************

#include <iostream.h>

void main()
{
  //建立小孩数组
  const int num=10;    //小孩数
  int interval;        //每次数interval个小孩，便让该小孩离开
  int a[num];          //小孩数组
  //给小孩编号
  for(int i=0; i<num; i++)   //小孩的编号只与小孩数有关
    a[i]=i+1;
  //输入数小孩间隔
  cout <<"please input the interval: ";    //输入一个数小孩个数
  cin >>interval;
  //将全体参加的小孩输出
  for(int i=0; i<num; i++)    //顺序输出开始时的小孩编号
    cout <<a[i] <<",";
  cout <<endl;

  int k=1;      //标识处理第k个离开的小孩
  int i=-1;     //数组下标(下一个值0就是第一个小孩的下标)
  //处理获胜前的小孩
  while(1){
    //在圈中数interval个小孩
    for(int j=0; j<interval; ){
      i=(i+1)%num;       //对下标加1求模
      if(a[i]!=0)        //如果该元素的小孩在圈中，则承认数数有效
        j++;
    }
    if(k==num) break;    //该小孩是最后一个(胜利者)吗？
    cout <<a[i] <<",";   //输出离开的小孩之编号
    a[i]=0;              //标识该小孩已离开
    k++;                 //准备处理下一个圈中小孩
  }
  //break语句跳转到此
  cout <<"\nNo." <<a[i] <<" boy've won.\n";    //输出胜利者
}
