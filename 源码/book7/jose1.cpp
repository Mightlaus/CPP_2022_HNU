//---------------------
//    Josephus问题解法1
//    jose1.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
int main(){
  const int num=10;         //小孩数
  int a[num];               //建立小孩数组
  for(int i=0; i<num; i++)  //给小孩编号
    a[i]=i+1;
  cout<<"please input the interval: ";    //数几个小孩算一轮
  int interval;             
  cin>>interval;            //输入数一轮的间隔数
  for(int i=0; i<num; i++)  //输出全部小孩编号
    cout<<a[i]<<",";
  cout<<endl;

  int i=-1;     //数组下标(下一个值0就是第一个小孩的下标)
  for(int k=1; 1; k++){     //处理第num-1轮
    for(int j=0; j<interval; ){  //在圈中数一轮小孩
      i=(i+1)%num;       //对下标加1求模
      if(a[i]!=0)        //如果该元素的小孩在圈中，则承认数数有效
        j++;
    }
    if(k==num) break;
    cout<<a[i]<<",";   //输出离开的小孩之编号
    a[i]=0;            //标识该小孩已离开
  }
  cout<<"\nNo."<<a[i]<<" boy've won.\n";    //输出胜利者
}//--------------------
