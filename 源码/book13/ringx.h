//---------------------
//    ringx.h
//---------------------
#ifndef RING
#define RING
struct Boy{                    //小孩结构作为链表结点
  int code;
  Boy* next;
};//-------------------
class Ring{                    //环链表类定义
public:
  Ring(int n, int beg);
  void Count(int m);           //数m个小孩
  void PutBoy(bool) const;         //输出当前小孩的编号
  void ClearBoy();             //将当前小孩从链表中脱钩
  void Display();        //输出圈中所有小孩
 ~Ring();
private:
  Boy* pBegin;
  Boy* pivot;
  Boy* pCurrent;
};//-------------------
#endif